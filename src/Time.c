/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../examples/rfc3280-PKIX1Explicit88.asn1"
 */

#include "Time.h"

static asn_TYPE_member_t asn_MBR_Time_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Time, choice.utcTime),
		(ASN_TAG_CLASS_UNIVERSAL | (23 << 2)),
		0,
		&asn_DEF_UTCTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"utcTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Time, choice.generalTime),
		(ASN_TAG_CLASS_UNIVERSAL | (24 << 2)),
		0,
		&asn_DEF_GeneralizedTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"generalTime"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Time_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 0, 0, 0 }, /* utcTime at 302 */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 1, 0, 0 } /* generalTime at 303 */
};
static asn_CHOICE_specifics_t asn_SPC_Time_specs_1 = {
	sizeof(struct Time),
	offsetof(struct Time, _asn_ctx),
	offsetof(struct Time, present),
	sizeof(((struct Time *)0)->present),
	asn_MAP_Time_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Time = {
	"Time",
	"Time",
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
	asn_MBR_Time_1,
	2,	/* Elements count */
	&asn_SPC_Time_specs_1	/* Additional specs */
};

