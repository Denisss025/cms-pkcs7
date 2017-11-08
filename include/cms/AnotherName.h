/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../examples/rfc3280-PKIX1Implicit88.asn1"
 */

#ifndef	_AnotherName_H_
#define	_AnotherName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AnotherName */
typedef struct AnotherName {
	OBJECT_IDENTIFIER_t	 type_id;
	ANY_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AnotherName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AnotherName;

#ifdef __cplusplus
}
#endif

#endif	/* _AnotherName_H_ */
#include <asn_internal.h>