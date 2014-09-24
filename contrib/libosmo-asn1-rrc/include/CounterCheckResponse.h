/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CounterCheckResponse_H_
#define	_CounterCheckResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_COUNT_C_InformationList;

/* CounterCheckResponse */
typedef struct CounterCheckResponse {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RB_COUNT_C_InformationList	*rb_COUNT_C_InformationList	/* OPTIONAL */;
	struct CounterCheckResponse__laterNonCriticalExtensions {
		BIT_STRING_t	*counterCheckResponse_r3_add_ext	/* OPTIONAL */;
		struct CounterCheckResponse__laterNonCriticalExtensions__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CounterCheckResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CounterCheckResponse;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RB-COUNT-C-InformationList.h"

#endif	/* _CounterCheckResponse_H_ */
#include <asn_internal.h>