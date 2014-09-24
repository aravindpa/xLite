/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "IndividualTimeslotInfo-LCR-r4.h"

static int
modulation_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
modulation_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
modulation_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	modulation_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
modulation_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	modulation_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
modulation_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	modulation_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
modulation_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	modulation_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
modulation_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	modulation_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
modulation_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	modulation_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
modulation_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	modulation_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
modulation_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	modulation_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
ss_TPC_Symbols_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
ss_TPC_Symbols_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
ss_TPC_Symbols_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ss_TPC_Symbols_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ss_TPC_Symbols_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ss_TPC_Symbols_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ss_TPC_Symbols_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ss_TPC_Symbols_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ss_TPC_Symbols_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ss_TPC_Symbols_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ss_TPC_Symbols_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_additionalSS_TPC_Symbols_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_modulation_constr_5 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ss_TPC_Symbols_constr_8 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_additionalSS_TPC_Symbols_constr_12 = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_modulation_value2enum_5[] = {
	{ 0,	8,	"mod-QPSK" },
	{ 1,	8,	"mod-8PSK" }
};
static unsigned int asn_MAP_modulation_enum2value_5[] = {
	1,	/* mod-8PSK(1) */
	0	/* mod-QPSK(0) */
};
static asn_INTEGER_specifics_t asn_SPC_modulation_specs_5 = {
	asn_MAP_modulation_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_modulation_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_modulation_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modulation_5 = {
	"modulation",
	"modulation",
	modulation_5_free,
	modulation_5_print,
	modulation_5_constraint,
	modulation_5_decode_ber,
	modulation_5_encode_der,
	modulation_5_decode_xer,
	modulation_5_encode_xer,
	modulation_5_decode_uper,
	modulation_5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_modulation_tags_5,
	sizeof(asn_DEF_modulation_tags_5)
		/sizeof(asn_DEF_modulation_tags_5[0]) - 1, /* 1 */
	asn_DEF_modulation_tags_5,	/* Same as above */
	sizeof(asn_DEF_modulation_tags_5)
		/sizeof(asn_DEF_modulation_tags_5[0]), /* 2 */
	&asn_PER_type_modulation_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_modulation_specs_5	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ss_TPC_Symbols_value2enum_8[] = {
	{ 0,	4,	"zero" },
	{ 1,	3,	"one" },
	{ 2,	13,	"sixteenOverSF" }
};
static unsigned int asn_MAP_ss_TPC_Symbols_enum2value_8[] = {
	1,	/* one(1) */
	2,	/* sixteenOverSF(2) */
	0	/* zero(0) */
};
static asn_INTEGER_specifics_t asn_SPC_ss_TPC_Symbols_specs_8 = {
	asn_MAP_ss_TPC_Symbols_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ss_TPC_Symbols_enum2value_8,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ss_TPC_Symbols_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ss_TPC_Symbols_8 = {
	"ss-TPC-Symbols",
	"ss-TPC-Symbols",
	ss_TPC_Symbols_8_free,
	ss_TPC_Symbols_8_print,
	ss_TPC_Symbols_8_constraint,
	ss_TPC_Symbols_8_decode_ber,
	ss_TPC_Symbols_8_encode_der,
	ss_TPC_Symbols_8_decode_xer,
	ss_TPC_Symbols_8_encode_xer,
	ss_TPC_Symbols_8_decode_uper,
	ss_TPC_Symbols_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ss_TPC_Symbols_tags_8,
	sizeof(asn_DEF_ss_TPC_Symbols_tags_8)
		/sizeof(asn_DEF_ss_TPC_Symbols_tags_8[0]) - 1, /* 1 */
	asn_DEF_ss_TPC_Symbols_tags_8,	/* Same as above */
	sizeof(asn_DEF_ss_TPC_Symbols_tags_8)
		/sizeof(asn_DEF_ss_TPC_Symbols_tags_8[0]), /* 2 */
	&asn_PER_type_ss_TPC_Symbols_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ss_TPC_Symbols_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_IndividualTimeslotInfo_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_LCR_r4, timeslotNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_LCR_r4, tfci_Existence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfci-Existence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_LCR_r4, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_LCR_r4, modulation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_modulation_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modulation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_LCR_r4, ss_TPC_Symbols),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ss_TPC_Symbols_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-TPC-Symbols"
		},
	{ ATF_POINTER, 1, offsetof(struct IndividualTimeslotInfo_LCR_r4, additionalSS_TPC_Symbols),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_additionalSS_TPC_Symbols_constraint_1,
		&asn_PER_memb_additionalSS_TPC_Symbols_constr_12,
		0,
		"additionalSS-TPC-Symbols"
		},
};
static int asn_MAP_IndividualTimeslotInfo_LCR_r4_oms_1[] = { 5 };
static ber_tlv_tag_t asn_DEF_IndividualTimeslotInfo_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IndividualTimeslotInfo_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslotNumber at 9293 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tfci-Existence at 9294 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleShiftAndBurstType at 9295 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* modulation at 9296 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ss-TPC-Symbols at 9297 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* additionalSS-TPC-Symbols at 9298 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IndividualTimeslotInfo_LCR_r4_specs_1 = {
	sizeof(struct IndividualTimeslotInfo_LCR_r4),
	offsetof(struct IndividualTimeslotInfo_LCR_r4, _asn_ctx),
	asn_MAP_IndividualTimeslotInfo_LCR_r4_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_IndividualTimeslotInfo_LCR_r4_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IndividualTimeslotInfo_LCR_r4 = {
	"IndividualTimeslotInfo-LCR-r4",
	"IndividualTimeslotInfo-LCR-r4",
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
	asn_DEF_IndividualTimeslotInfo_LCR_r4_tags_1,
	sizeof(asn_DEF_IndividualTimeslotInfo_LCR_r4_tags_1)
		/sizeof(asn_DEF_IndividualTimeslotInfo_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_IndividualTimeslotInfo_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_IndividualTimeslotInfo_LCR_r4_tags_1)
		/sizeof(asn_DEF_IndividualTimeslotInfo_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IndividualTimeslotInfo_LCR_r4_1,
	6,	/* Elements count */
	&asn_SPC_IndividualTimeslotInfo_LCR_r4_specs_1	/* Additional specs */
};
