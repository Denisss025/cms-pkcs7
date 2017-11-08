/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../examples/rfc3280-PKIX1Implicit88.asn1"
 */

#ifndef	_PolicyMappings_H_
#define	_PolicyMappings_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "CertPolicyId.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PolicyMappings */
typedef struct PolicyMappings {
	A_SEQUENCE_OF(struct Member {
		CertPolicyId_t	 issuerDomainPolicy;
		CertPolicyId_t	 subjectDomainPolicy;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PolicyMappings_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PolicyMappings;

#ifdef __cplusplus
}
#endif

#endif	/* _PolicyMappings_H_ */
#include <asn_internal.h>
