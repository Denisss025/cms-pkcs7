/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../examples/rfc3280-PKIX1Explicit88.asn1"
 */

#include "ExtendedNetworkAddress.h"

static int permitted_alphabet_table_3[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/* .                */
 2, 3, 4, 5, 6, 7, 8, 9,10,11, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
};

static int check_permitted_alphabet_3(const void *sptr) {
	int *table = permitted_alphabet_table_3;
	/* The underlying type is NumericString */
	const NumericString_t *st = (const NumericString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int permitted_alphabet_table_4[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/* .                */
 2, 3, 4, 5, 6, 7, 8, 9,10,11, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
};

static int check_permitted_alphabet_4(const void *sptr) {
	int *table = permitted_alphabet_table_4;
	/* The underlying type is NumericString */
	const NumericString_t *st = (const NumericString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int
memb_number_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const NumericString_t *st = (const NumericString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 15)
		 && !check_permitted_alphabet_3(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sub_address_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const NumericString_t *st = (const NumericString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 40)
		 && !check_permitted_alphabet_4(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_e163_4_address_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct e163_4_address, number),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumericString,
		memb_number_constraint_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"number"
		},
	{ ATF_POINTER, 1, offsetof(struct e163_4_address, sub_address),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumericString,
		memb_sub_address_constraint_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sub-address"
		},
};
static ber_tlv_tag_t asn_DEF_e163_4_address_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_e163_4_address_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* number at 597 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sub-address at 599 */
};
static asn_SEQUENCE_specifics_t asn_SPC_e163_4_address_specs_2 = {
	sizeof(struct e163_4_address),
	offsetof(struct e163_4_address, _asn_ctx),
	asn_MAP_e163_4_address_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e163_4_address_2 = {
	"e163-4-address",
	"e163-4-address",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_e163_4_address_tags_2,
	sizeof(asn_DEF_e163_4_address_tags_2)
		/sizeof(asn_DEF_e163_4_address_tags_2[0]), /* 1 */
	asn_DEF_e163_4_address_tags_2,	/* Same as above */
	sizeof(asn_DEF_e163_4_address_tags_2)
		/sizeof(asn_DEF_e163_4_address_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_e163_4_address_2,
	2,	/* Elements count */
	&asn_SPC_e163_4_address_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ExtendedNetworkAddress_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ExtendedNetworkAddress, choice.e163_4_address),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_e163_4_address_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"e163-4-address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ExtendedNetworkAddress, choice.psap_address),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresentationAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"psap-address"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ExtendedNetworkAddress_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* e163-4-address at 598 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* psap-address at 602 */
};
static asn_CHOICE_specifics_t asn_SPC_ExtendedNetworkAddress_specs_1 = {
	sizeof(struct ExtendedNetworkAddress),
	offsetof(struct ExtendedNetworkAddress, _asn_ctx),
	offsetof(struct ExtendedNetworkAddress, present),
	sizeof(((struct ExtendedNetworkAddress *)0)->present),
	asn_MAP_ExtendedNetworkAddress_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ExtendedNetworkAddress = {
	"ExtendedNetworkAddress",
	"ExtendedNetworkAddress",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_ExtendedNetworkAddress_1,
	2,	/* Elements count */
	&asn_SPC_ExtendedNetworkAddress_specs_1	/* Additional specs */
};

