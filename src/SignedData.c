/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "../rfc5652-CryptographicMessageSyntax2004.asn1"
 */

#include "SignedData.h"

static asn_TYPE_member_t asn_MBR_SignedData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignedData, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CMSVersion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignedData, digestAlgorithms),
		(ASN_TAG_CLASS_UNIVERSAL | (17 << 2)),
		0,
		&asn_DEF_DigestAlgorithmIdentifiers,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"digestAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignedData, encapContentInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EncapsulatedContentInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encapContentInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct SignedData, certificates),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CertificateSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"certificates"
		},
	{ ATF_POINTER, 1, offsetof(struct SignedData, crls),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RevocationInfoChoices,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"crls"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignedData, signerInfos),
		(ASN_TAG_CLASS_UNIVERSAL | (17 << 2)),
		0,
		&asn_DEF_SignerInfos,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signerInfos"
		},
};
static ber_tlv_tag_t asn_DEF_SignedData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SignedData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* version at 57 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 }, /* encapContentInfo at 59 */
    { (ASN_TAG_CLASS_UNIVERSAL | (17 << 2)), 1, 0, 1 }, /* digestAlgorithms at 58 */
    { (ASN_TAG_CLASS_UNIVERSAL | (17 << 2)), 5, -1, 0 }, /* signerInfos at 62 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 3, 0, 0 }, /* certificates at 60 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 4, 0, 0 } /* crls at 61 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SignedData_specs_1 = {
	sizeof(struct SignedData),
	offsetof(struct SignedData, _asn_ctx),
	asn_MAP_SignedData_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SignedData = {
	"SignedData",
	"SignedData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SignedData_tags_1,
	sizeof(asn_DEF_SignedData_tags_1)
		/sizeof(asn_DEF_SignedData_tags_1[0]), /* 1 */
	asn_DEF_SignedData_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignedData_tags_1)
		/sizeof(asn_DEF_SignedData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SignedData_1,
	6,	/* Elements count */
	&asn_SPC_SignedData_specs_1	/* Additional specs */
};

