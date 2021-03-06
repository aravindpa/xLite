/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IMSI_and_ESN_DS_41_H_
#define	_IMSI_and_ESN_DS_41_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI-DS-41.h"
#include "ESN-DS-41.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IMSI-and-ESN-DS-41 */
typedef struct IMSI_and_ESN_DS_41 {
	IMSI_DS_41_t	 imsi_DS_41;
	ESN_DS_41_t	 esn_DS_41;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IMSI_and_ESN_DS_41_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IMSI_and_ESN_DS_41;

#ifdef __cplusplus
}
#endif

#endif	/* _IMSI_and_ESN_DS_41_H_ */
#include <asn_internal.h>
