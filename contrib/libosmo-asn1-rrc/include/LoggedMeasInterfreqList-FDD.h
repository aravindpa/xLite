/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_LoggedMeasInterfreqList_FDD_H_
#define	_LoggedMeasInterfreqList_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LoggedMeasInterfreqInfo_FDD;

/* LoggedMeasInterfreqList-FDD */
typedef struct LoggedMeasInterfreqList_FDD {
	A_SEQUENCE_OF(struct LoggedMeasInterfreqInfo_FDD) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasInterfreqList_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasInterfreqList_FDD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LoggedMeasInterfreqInfo-FDD.h"

#endif	/* _LoggedMeasInterfreqList_FDD_H_ */
#include <asn_internal.h>
