/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../examples/rfc3280-PKIX1Implicit88.asn1"
 */

#include "GeneralName.h"

static asn_TYPE_member_t asn_MBR_GeneralName_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.otherName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AnotherName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otherName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.rfc822Name),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rfc822Name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.dNSName),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dNSName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.x400Address),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ORAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"x400Address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.directoryName),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Name,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"directoryName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.ediPartyName),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EDIPartyName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ediPartyName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.uniformResourceIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"uniformResourceIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.iPAddress),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iPAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeneralName, choice.registeredID),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"registeredID"
		},
};
static asn_TYPE_tag2member_t asn_MAP_GeneralName_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* otherName at 156 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rfc822Name at 157 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dNSName at 158 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* x400Address at 159 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* directoryName at 160 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ediPartyName at 161 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* uniformResourceIdentifier at 162 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* iPAddress at 163 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* registeredID at 164 */
};
static asn_CHOICE_specifics_t asn_SPC_GeneralName_specs_1 = {
	sizeof(struct GeneralName),
	offsetof(struct GeneralName, _asn_ctx),
	offsetof(struct GeneralName, present),
	sizeof(((struct GeneralName *)0)->present),
	asn_MAP_GeneralName_tag2el_1,
	9,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GeneralName = {
	"GeneralName",
	"GeneralName",
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
	asn_MBR_GeneralName_1,
	9,	/* Elements count */
	&asn_SPC_GeneralName_specs_1	/* Additional specs */
};
