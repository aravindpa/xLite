/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_StoredTGP_SequenceList_r8_H_
#define	_StoredTGP_SequenceList_r8_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct StoredTGP_Sequence_r8;

/* StoredTGP-SequenceList-r8 */
typedef struct StoredTGP_SequenceList_r8 {
	A_SEQUENCE_OF(struct StoredTGP_Sequence_r8) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StoredTGP_SequenceList_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StoredTGP_SequenceList_r8;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "StoredTGP-Sequence-r8.h"

#endif	/* _StoredTGP_SequenceList_r8_H_ */
#include <asn_internal.h>
