/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../examples/rfc3280-PKIX1Explicit88.asn1"
 */

#include "TBSCertificate.h"

static int asn_DFL_2_set_0(int set_value, void **sptr) {
	Version_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		return asn_long2INTEGER(st, 0);
	} else {
		/* Test default value 0 */
		long value;
		if(asn_INTEGER2long(st, &value))
			return -1;
		return (value == 0);
	}
}
static asn_TYPE_member_t asn_MBR_TBSCertificate_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TBSCertificate, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Version,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_2_set_0,	/* DEFAULT 0 */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, serialNumber),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CertificateSerialNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serialNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, signature),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, issuer),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Name,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"issuer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, validity),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Validity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"validity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, subject),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Name,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subject"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, subjectPublicKeyInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SubjectPublicKeyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subjectPublicKeyInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct TBSCertificate, issuerUniqueID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UniqueIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"issuerUniqueID"
		},
	{ ATF_POINTER, 2, offsetof(struct TBSCertificate, subjectUniqueID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UniqueIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subjectUniqueID"
		},
	{ ATF_POINTER, 1, offsetof(struct TBSCertificate, extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extensions"
		},
};
static ber_tlv_tag_t asn_DEF_TBSCertificate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TBSCertificate_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* serialNumber at 280 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 4 }, /* signature at 281 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -1, 3 }, /* rdnSequence at 248 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -2, 2 }, /* validity at 283 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -3, 1 }, /* rdnSequence at 248 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -4, 0 }, /* subjectPublicKeyInfo at 285 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* version at 279 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 7, 0, 0 }, /* issuerUniqueID at 286 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 8, 0, 0 }, /* subjectUniqueID at 288 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 9, 0, 0 } /* extensions at 290 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TBSCertificate_specs_1 = {
	sizeof(struct TBSCertificate),
	offsetof(struct TBSCertificate, _asn_ctx),
	asn_MAP_TBSCertificate_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TBSCertificate = {
	"TBSCertificate",
	"TBSCertificate",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TBSCertificate_tags_1,
	sizeof(asn_DEF_TBSCertificate_tags_1)
		/sizeof(asn_DEF_TBSCertificate_tags_1[0]), /* 1 */
	asn_DEF_TBSCertificate_tags_1,	/* Same as above */
	sizeof(asn_DEF_TBSCertificate_tags_1)
		/sizeof(asn_DEF_TBSCertificate_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TBSCertificate_1,
	10,	/* Elements count */
	&asn_SPC_TBSCertificate_specs_1	/* Additional specs */
};

