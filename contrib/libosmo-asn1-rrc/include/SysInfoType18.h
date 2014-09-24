/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType18_H_
#define	_SysInfoType18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SysInfoType18-v6b0ext.h"
#include "SysInfoType18-v860ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMNIdentitiesOfNeighbourCells;

/* SysInfoType18 */
typedef struct SysInfoType18 {
	struct PLMNIdentitiesOfNeighbourCells	*idleModePLMNIdentities	/* OPTIONAL */;
	struct PLMNIdentitiesOfNeighbourCells	*connectedModePLMNIdentities	/* OPTIONAL */;
	struct SysInfoType18__v6b0NonCriticalExtensions {
		SysInfoType18_v6b0ext_t	 sysInfoType18_v6b0ext;
		struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions {
			SysInfoType18_v860ext_t	 sysInfoType18_v860ext;
			struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v860NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v6b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType18;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMNIdentitiesOfNeighbourCells.h"

#endif	/* _SysInfoType18_H_ */
#include <asn_internal.h>