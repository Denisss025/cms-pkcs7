/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "../rfc5652-CryptographicMessageSyntax2004.asn1"
 */

#include "EncryptedData.h"

static asn_TYPE_member_t asn_MBR_EncryptedData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EncryptedData, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CMSVersion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EncryptedData, encryptedContentInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EncryptedContentInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encryptedContentInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct EncryptedData, unprotectedAttrs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnprotectedAttributes,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unprotectedAttrs"
		},
};
static ber_tlv_tag_t asn_DEF_EncryptedData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EncryptedData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* version at 218 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* encryptedContentInfo at 219 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 } /* unprotectedAttrs at 220 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EncryptedData_specs_1 = {
	sizeof(struct EncryptedData),
	offsetof(struct EncryptedData, _asn_ctx),
	asn_MAP_EncryptedData_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EncryptedData = {
	"EncryptedData",
	"EncryptedData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EncryptedData_tags_1,
	sizeof(asn_DEF_EncryptedData_tags_1)
		/sizeof(asn_DEF_EncryptedData_tags_1[0]), /* 1 */
	asn_DEF_EncryptedData_tags_1,	/* Same as above */
	sizeof(asn_DEF_EncryptedData_tags_1)
		/sizeof(asn_DEF_EncryptedData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EncryptedData_1,
	3,	/* Elements count */
	&asn_SPC_EncryptedData_specs_1	/* Additional specs */
};

