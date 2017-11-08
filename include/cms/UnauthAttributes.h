/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "../rfc5652-CryptographicMessageSyntax2004.asn1"
 */

#ifndef	_UnauthAttributes_H_
#define	_UnauthAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Attribute;

/* UnauthAttributes */
typedef struct UnauthAttributes {
	A_SET_OF(struct Attribute) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UnauthAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnauthAttributes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Attribute.h"

#endif	/* _UnauthAttributes_H_ */
#include <asn_internal.h>