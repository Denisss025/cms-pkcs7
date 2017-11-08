/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "../rfc5652-CryptographicMessageSyntax2004.asn1"
 */

#include "IssuerAndSerialNumber.h"

static asn_TYPE_member_t asn_MBR_IssuerAndSerialNumber_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IssuerAndSerialNumber, issuer),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Name,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"issuer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IssuerAndSerialNumber, serialNumber),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CertificateSerialNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serialNumber"
		},
};
static ber_tlv_tag_t asn_DEF_IssuerAndSerialNumber_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IssuerAndSerialNumber_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* serialNumber at 285 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* rdnSequence at 248 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IssuerAndSerialNumber_specs_1 = {
	sizeof(struct IssuerAndSerialNumber),
	offsetof(struct IssuerAndSerialNumber, _asn_ctx),
	asn_MAP_IssuerAndSerialNumber_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IssuerAndSerialNumber = {
	"IssuerAndSerialNumber",
	"IssuerAndSerialNumber",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IssuerAndSerialNumber_tags_1,
	sizeof(asn_DEF_IssuerAndSerialNumber_tags_1)
		/sizeof(asn_DEF_IssuerAndSerialNumber_tags_1[0]), /* 1 */
	asn_DEF_IssuerAndSerialNumber_tags_1,	/* Same as above */
	sizeof(asn_DEF_IssuerAndSerialNumber_tags_1)
		/sizeof(asn_DEF_IssuerAndSerialNumber_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IssuerAndSerialNumber_1,
	2,	/* Elements count */
	&asn_SPC_IssuerAndSerialNumber_specs_1	/* Additional specs */
};

