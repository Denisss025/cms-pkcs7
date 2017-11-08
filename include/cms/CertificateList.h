/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../examples/rfc3280-PKIX1Explicit88.asn1"
 */

#ifndef	_CertificateList_H_
#define	_CertificateList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TBSCertList.h"
#include "AlgorithmIdentifier.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CertificateList */
typedef struct CertificateList {
	TBSCertList_t	 tbsCertList;
	AlgorithmIdentifier_t	 signatureAlgorithm;
	BIT_STRING_t	 signature;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertificateList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertificateList;

#ifdef __cplusplus
}
#endif

#endif	/* _CertificateList_H_ */
#include <asn_internal.h>
