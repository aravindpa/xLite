/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "RRCConnectionSetupComplete-r3-add-ext-IEs.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_11 = {
	sizeof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions__va40NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions__va40NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_11 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nonCriticalExtensions_tags_11,
	sizeof(asn_DEF_nonCriticalExtensions_tags_11)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_11[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_11,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_11)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_va40NonCriticalExtensions_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions__va40NonCriticalExtensions, rrcConnectionSetupCompleteBand_va40ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupCompleteBand_va40ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionSetupCompleteBand-va40ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions__va40NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_va40NonCriticalExtensions_oms_9[] = { 1 };
static ber_tlv_tag_t asn_DEF_va40NonCriticalExtensions_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_va40NonCriticalExtensions_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionSetupCompleteBand-va40ext at 9022 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 9023 */
};
static asn_SEQUENCE_specifics_t asn_SPC_va40NonCriticalExtensions_specs_9 = {
	sizeof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions__va40NonCriticalExtensions),
	offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions__va40NonCriticalExtensions, _asn_ctx),
	asn_MAP_va40NonCriticalExtensions_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_va40NonCriticalExtensions_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_va40NonCriticalExtensions_9 = {
	"va40NonCriticalExtensions",
	"va40NonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_va40NonCriticalExtensions_tags_9,
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_9)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_9[0]) - 1, /* 1 */
	asn_DEF_va40NonCriticalExtensions_tags_9,	/* Same as above */
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_9)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_va40NonCriticalExtensions_9,
	2,	/* Elements count */
	&asn_SPC_va40NonCriticalExtensions_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v7f0NonCriticalExtensions_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions, rrcConnectionSetupComplete_v7f0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_v7f0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionSetupComplete-v7f0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions, va40NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_va40NonCriticalExtensions_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"va40NonCriticalExtensions"
		},
};
static int asn_MAP_v7f0NonCriticalExtensions_oms_7[] = { 1 };
static ber_tlv_tag_t asn_DEF_v7f0NonCriticalExtensions_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v7f0NonCriticalExtensions_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionSetupComplete-v7f0ext at 9019 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* va40NonCriticalExtensions at 9022 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v7f0NonCriticalExtensions_specs_7 = {
	sizeof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions),
	offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions__v7f0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v7f0NonCriticalExtensions_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_v7f0NonCriticalExtensions_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v7f0NonCriticalExtensions_7 = {
	"v7f0NonCriticalExtensions",
	"v7f0NonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_v7f0NonCriticalExtensions_tags_7,
	sizeof(asn_DEF_v7f0NonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_v7f0NonCriticalExtensions_tags_7[0]) - 1, /* 1 */
	asn_DEF_v7f0NonCriticalExtensions_tags_7,	/* Same as above */
	sizeof(asn_DEF_v7f0NonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_v7f0NonCriticalExtensions_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v7f0NonCriticalExtensions_7,
	2,	/* Elements count */
	&asn_SPC_v7f0NonCriticalExtensions_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v7e0NonCriticalExtensions_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions, rrcConnectionSetupComplete_v7e0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_v7e0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionSetupComplete-v7e0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions, v7f0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v7f0NonCriticalExtensions_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v7f0NonCriticalExtensions"
		},
};
static int asn_MAP_v7e0NonCriticalExtensions_oms_5[] = { 1 };
static ber_tlv_tag_t asn_DEF_v7e0NonCriticalExtensions_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v7e0NonCriticalExtensions_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionSetupComplete-v7e0ext at 9016 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v7f0NonCriticalExtensions at 9019 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v7e0NonCriticalExtensions_specs_5 = {
	sizeof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions),
	offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions__v7e0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v7e0NonCriticalExtensions_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_v7e0NonCriticalExtensions_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v7e0NonCriticalExtensions_5 = {
	"v7e0NonCriticalExtensions",
	"v7e0NonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_v7e0NonCriticalExtensions_tags_5,
	sizeof(asn_DEF_v7e0NonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_v7e0NonCriticalExtensions_tags_5[0]) - 1, /* 1 */
	asn_DEF_v7e0NonCriticalExtensions_tags_5,	/* Same as above */
	sizeof(asn_DEF_v7e0NonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_v7e0NonCriticalExtensions_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v7e0NonCriticalExtensions_5,
	2,	/* Elements count */
	&asn_SPC_v7e0NonCriticalExtensions_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v680NonCriticalExtensions_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions, rrcConnectionSetupComplete_v680ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_v680ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionSetupComplete-v680ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions, v7e0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v7e0NonCriticalExtensions_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v7e0NonCriticalExtensions"
		},
};
static int asn_MAP_v680NonCriticalExtensions_oms_3[] = { 1 };
static ber_tlv_tag_t asn_DEF_v680NonCriticalExtensions_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v680NonCriticalExtensions_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionSetupComplete-v680ext at 9014 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v7e0NonCriticalExtensions at 9016 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v680NonCriticalExtensions_specs_3 = {
	sizeof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions),
	offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs__v680NonCriticalExtensions, _asn_ctx),
	asn_MAP_v680NonCriticalExtensions_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_v680NonCriticalExtensions_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v680NonCriticalExtensions_3 = {
	"v680NonCriticalExtensions",
	"v680NonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_v680NonCriticalExtensions_tags_3,
	sizeof(asn_DEF_v680NonCriticalExtensions_tags_3)
		/sizeof(asn_DEF_v680NonCriticalExtensions_tags_3[0]) - 1, /* 1 */
	asn_DEF_v680NonCriticalExtensions_tags_3,	/* Same as above */
	sizeof(asn_DEF_v680NonCriticalExtensions_tags_3)
		/sizeof(asn_DEF_v680NonCriticalExtensions_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v680NonCriticalExtensions_3,
	2,	/* Elements count */
	&asn_SPC_v680NonCriticalExtensions_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_r3_add_ext_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs, rrcConnectionSetupComplete_v650ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_v650ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionSetupComplete-v650ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs, v680NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v680NonCriticalExtensions_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v680NonCriticalExtensions"
		},
};
static int asn_MAP_RRCConnectionSetupComplete_r3_add_ext_IEs_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetupComplete_r3_add_ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionSetupComplete-v650ext at 9012 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v680NonCriticalExtensions at 9014 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_r3_add_ext_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetupComplete_r3_add_ext_IEs),
	offsetof(struct RRCConnectionSetupComplete_r3_add_ext_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetupComplete_r3_add_ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetupComplete_r3_add_ext_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs = {
	"RRCConnectionSetupComplete-r3-add-ext-IEs",
	"RRCConnectionSetupComplete-r3-add-ext-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_r3_add_ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionSetupComplete_r3_add_ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionSetupComplete_r3_add_ext_IEs_specs_1	/* Additional specs */
};
