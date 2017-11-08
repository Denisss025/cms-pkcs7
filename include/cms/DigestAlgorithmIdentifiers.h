/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "../rfc5652-CryptographicMessageSyntax2004.asn1"
 */

#ifndef	_DigestAlgorithmIdentifiers_H_
#define	_DigestAlgorithmIdentifiers_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlgorithmIdentifier;

/* DigestAlgorithmIdentifiers */
typedef struct DigestAlgorithmIdentifiers {
	A_SET_OF(struct AlgorithmIdentifier) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DigestAlgorithmIdentifiers_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DigestAlgorithmIdentifiers;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DigestAlgorithmIdentifier.h"

#endif	/* _DigestAlgorithmIdentifiers_H_ */
#include <asn_internal.h>
