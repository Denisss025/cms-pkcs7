/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../examples/rfc3280-PKIX1Explicit88.asn1"
 */

#ifndef	_Name_H_
#define	_Name_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RDNSequence.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Name_PR {
	Name_PR_NOTHING,	/* No components present */
	Name_PR_rdnSequence
} Name_PR;

/* Name */
typedef struct Name {
	Name_PR present;
	union Name_u {
		RDNSequence_t	 rdnSequence;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Name_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Name;

#ifdef __cplusplus
}
#endif

#endif	/* _Name_H_ */
#include <asn_internal.h>
