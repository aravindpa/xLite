/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RAB_Info_r6_H_
#define	_RAB_Info_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAB-Identity.h"
#include "MBMS-SessionIdentity.h"
#include "CN-DomainIdentity.h"
#include "NAS-Synchronisation-Indicator.h"
#include "Re-EstablishmentTimer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RAB-Info-r6 */
typedef struct RAB_Info_r6 {
	RAB_Identity_t	 rab_Identity;
	MBMS_SessionIdentity_t	*mbms_SessionIdentity	/* OPTIONAL */;
	CN_DomainIdentity_t	 cn_DomainIdentity;
	NAS_Synchronisation_Indicator_t	*nas_Synchronisation_Indicator	/* OPTIONAL */;
	Re_EstablishmentTimer_t	 re_EstablishmentTimer;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_Info_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_Info_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _RAB_Info_r6_H_ */
#include <asn_internal.h>
