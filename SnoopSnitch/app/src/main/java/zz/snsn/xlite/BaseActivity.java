package zz.snsn.xlite;

import android.app.ActionBar;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.support.v4.app.FragmentActivity;
import android.support.v4.app.NavUtils;
import android.support.v4.content.res.ResourcesCompat;
import android.view.Gravity;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import android.widget.Toast;

import zz.snsn.xlite.qdmon.StateChangedReason;
import zz.snsn.xlite.util.MSDServiceHelperCreator;
import zz.snsn.xlite.util.MsdConfig;
import zz.snsn.xlite.util.MsdDialog;
import zz.snsn.xlite.util.MsdLog;
import zz.snsn.xlite.util.Utils;

public abstract class BaseActivity extends FragmentActivity {

    private static final String TAG = "SNSN";
    private static final String mTAG = "BaseActivity: ";

    // Attributes
	protected MSDServiceHelperCreator msdServiceHelperCreator;
	protected TextView messageText;
	protected View messageLayout;
	protected Toast messageToast;
	protected Menu menu;
	protected Boolean isInForeground = false;
	protected Handler handler;
	protected final int refresh_intervall = 2000; // in [ms] for use in postDelayed()
	// Static variable so that it is common to all Activities of the App
	private static boolean exitFlag = false;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		LayoutInflater inflater = getLayoutInflater();
		messageLayout = inflater.inflate(R.layout.custom_message_popdown,
				(ViewGroup) findViewById(R.id.toast_layout_root));
		messageText = (TextView) messageLayout.findViewById(R.id.text);
		messageToast = new Toast(getApplicationContext());

		// Get MsdService Helper
		msdServiceHelperCreator = MSDServiceHelperCreator.getInstance(this.getApplicationContext(), true);
		MsdLog.init(msdServiceHelperCreator.getMsdServiceHelper());
		MsdLog.i(TAG, mTAG + "MSD_ACTIVITY_CREATED: " + getClass().getCanonicalName());

		handler = new Handler();
	}

	@Override
	protected void onResume() {
		if(exitFlag ){
			finish();
			System.exit(0);
			return;
		}
		msdServiceHelperCreator.setCurrentActivity(this);
		isInForeground = true;
		// Set title/subtitle of the action bar...
		ActionBar ab = getActionBar();
		ab.setTitle(R.string.actionBar_title);
		ab.setSubtitle(setAppId());
		handler.postDelayed(runnable, refresh_intervall);
		setRecordingIcon ();
		super.onResume();
	}

	@Override
	protected void onPause() {
		isInForeground = false;
		handler.removeCallbacks(runnable);
		super.onPause();
	}

	@Override
	protected void onDestroy() {
		super.onDestroy();
		// Fixme: Do we need to unbindService here?
		//unbindService(m_serviceConnection);
		//Toast.makeText(BaseActivity.this, "Service Un-Binded", Toast.LENGTH_LONG).show();
	}

	protected void showMap() {
		Intent intent = new Intent(this, MapActivity.class);
		startActivity(intent);
	}

	protected void showTestScreen() {
		Intent intent = new Intent(this, MsdServiceHelperTest.class);
		startActivity(intent);
	}

	protected void showSettings() {
		Intent intent = new Intent(this, SettingsActivity.class);
		startActivity(intent);
	}

	protected void showAbout()	{
		Intent intent = new Intent(this, AboutActivity.class);
		startActivity(intent);
	}

	protected void showNetworkInfo() {
		Intent intent = new Intent(this, NetworkInfoActivity.class);
		startActivity(intent);
	}

	protected void toggleRecording() {
		Boolean isRecording = msdServiceHelperCreator.getMsdServiceHelper().isRecording();

		if (isRecording) {
			msdServiceHelperCreator.getMsdServiceHelper().stopRecording();
		} else {
			msdServiceHelperCreator.getMsdServiceHelper().startRecording();
		}
	}

	public MSDServiceHelperCreator getMsdServiceHelperCreator() {
		return msdServiceHelperCreator;
	}

	@Override
	public boolean onOptionsItemSelected(MenuItem item) {
		switch (item.getItemId()) {
			case R.id.menu_action_scan:
				toggleRecording();
				break;
			case R.id.menu_action_map:
				showMap();
				break;
			case R.id.menu_action_info:
				showTestScreen();
				break;
			// "Active test (advanced mode)" has been renamed to "Detailed Test" (2017-01-04)
			case R.id.menu_action_active_test_advanced:
				Intent intent = new Intent(this, ActiveTestAdvanced.class);
				startActivity(intent);
				break;
			case R.id.menu_action_upload_pending_files:
				getMsdServiceHelperCreator().getMsdServiceHelper().triggerUploading();
				break;
			case R.id.menu_action_upload_debug_logs:
				Intent intent2 = new Intent(this, UploadDebugActivity.class);
				startActivity(intent2);
				break;
			case R.id.menu_action_settings:
				showSettings();
				break;
			case R.id.menu_action_about:
				showAbout();
				break;
			case R.id.menu_action_exit:
				quitApplication();
				break;
			case R.id.menu_action_network_info:
				showNetworkInfo();
				break;
			case android.R.id.home:
				NavUtils.navigateUpFromSameTask(this);
				break;
			default:
				MsdLog.e(TAG, mTAG + "Invalid menu entry pressed, id=" + item.getItemId());
				break;
		}
		return true;
	}

	private void showMessage(String message) {
		if (isInForeground) {
			messageText.setText(message);
			messageToast.setGravity(Gravity.FILL_HORIZONTAL|Gravity.TOP, 0, getActionBar().getHeight());
			messageToast.setDuration(Toast.LENGTH_LONG);
			messageToast.setView(messageLayout);
			messageToast.show();
		}
	}

	public void internalError(String errorMsg) {
		MsdDialog.makeFatalConditionDialog(this, "A fatal error occurred!", new OnClickListener() {
			@Override
			public void onClick(DialogInterface dialog, int which) {
				quitApplication();
			}
		}, errorMsg, false).show();
	}

	public void stateChanged(StateChangedReason reason) {
		if (reason.equals(StateChangedReason.RECORDING_STATE_CHANGED)) {
			if (menu != null) {
				if (msdServiceHelperCreator.getMsdServiceHelper().isRecording()) {
					menu.getItem(0).setIcon(ResourcesCompat.getDrawable(getResources(), R.drawable.ic_menu_record_disable, null));
					showMessage(getResources().getString(R.string.message_recordingStarted));
				} else {
					menu.getItem(0).setIcon(ResourcesCompat.getDrawable(getResources(), R.drawable.ic_menu_notrecord_disable, null));
					showMessage(getResources().getString(R.string.message_recordingStopped));
				}	
			}
		}
	}

	private String setAppId() {
		if (MsdConfig.getAppId(this).equals("")) {
			MsdConfig.setAppId(this, Utils.generateAppId());
		}
		return getResources().getText(R.string.actionBar_subTitle) + " " + MsdConfig.getAppId(this);
	}

	protected Runnable runnable = new Runnable() {
		@Override
		public void run() 
		{
			// do what you need to do
			refreshView();
			// and here comes the "trick"
			handler.postDelayed(runnable, refresh_intervall);
		}
	};

	protected void refreshView() {}

	private void setRecordingIcon() {
		if (menu != null) {
			if (msdServiceHelperCreator.getMsdServiceHelper().isRecording()) {
				menu.getItem(0).setIcon(ResourcesCompat.getDrawable(getResources(), R.drawable.ic_menu_record_disable, null));
			} else {
				menu.getItem(0).setIcon(ResourcesCompat.getDrawable(getResources(), R.drawable.ic_menu_notrecord_disable, null));
			}	
		}
	}

	protected void quitApplication() {
        MsdLog.i(TAG, mTAG + "quitApplication() called");
		msdServiceHelperCreator.getMsdServiceHelper().stopRecording();
		msdServiceHelperCreator.getMsdServiceHelper().stopService();
		// If we call System.exit() here from an activity launched by
		// DashboardActivity, the Android system will restart the App to resume
		// DashboardActivity (which is still on the activity stack). So
		// System.exit() has to be called from onResume() in DashboardActivity
		// instead. This is implemented via exitFlag, which is a static variable
		// of BaseActivity.
		exitFlag = true;
		finish();
		if(this.getClass() == DashboardActivity.class){
			System.exit(0);
		}
	}
}
