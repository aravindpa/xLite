/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SecondaryEDCH_Info_Common_H_
#define	_SecondaryEDCH_Info_Common_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FrequencyInfo.h"
#include "ScramblingCodeType.h"
#include "UL-ScramblingCode.h"
#include <BIT_STRING.h>
#include "MinReduced-E-DPDCH-GainFactor.h"
#include "E-DCH-MinimumSet-E-TFCI.h"
#include <NativeInteger.h>
#include "PC-Preamble.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecondaryEDCH_Info_Common__servingGrant__primary_Secondary_GrantSelector {
	SecondaryEDCH_Info_Common__servingGrant__primary_Secondary_GrantSelector_primary	= 0,
	SecondaryEDCH_Info_Common__servingGrant__primary_Secondary_GrantSelector_secondary	= 1
} e_SecondaryEDCH_Info_Common__servingGrant__primary_Secondary_GrantSelector;

/* SecondaryEDCH-Info-Common */
typedef struct SecondaryEDCH_Info_Common {
	FrequencyInfo_t	 frequencyInfo;
	ScramblingCodeType_t	 scramblingCodeType;
	UL_ScramblingCode_t	 scramblingCodeNumber;
	BIT_STRING_t	*ms2_SchedTransmGrantHARQAlloc	/* OPTIONAL */;
	struct SecondaryEDCH_Info_Common__servingGrant {
		long	 primary_Secondary_GrantSelector;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *servingGrant;
	MinReduced_E_DPDCH_GainFactor_t	*minReduced_E_DPDCH_GainFactor	/* OPTIONAL */;
	E_DCH_MinimumSet_E_TFCI_t	*e_DCH_minimumSet_E_TFCI	/* OPTIONAL */;
	long	 dpcchPowerOffset_SecondaryULFrequency;
	PC_Preamble_t	 pc_Preamble;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryEDCH_Info_Common_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_primary_Secondary_GrantSelector_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryEDCH_Info_Common;

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryEDCH_Info_Common_H_ */
#include <asn_internal.h>