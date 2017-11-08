/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../examples/rfc3280-PKIX1Implicit88.asn1"
 */

#ifndef	_IssuingDistributionPoint_H_
#define	_IssuingDistributionPoint_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "ReasonFlags.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DistributionPointName;

/* IssuingDistributionPoint */
typedef struct IssuingDistributionPoint {
	struct DistributionPointName	*distributionPoint	/* OPTIONAL */;
	BOOLEAN_t	*onlyContainsUserCerts	/* DEFAULT FALSE */;
	BOOLEAN_t	*onlyContainsCACerts	/* DEFAULT FALSE */;
	ReasonFlags_t	*onlySomeReasons	/* OPTIONAL */;
	BOOLEAN_t	*indirectCRL	/* DEFAULT FALSE */;
	BOOLEAN_t	*onlyContainsAttributeCerts	/* DEFAULT FALSE */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IssuingDistributionPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IssuingDistributionPoint;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DistributionPointName.h"

#endif	/* _IssuingDistributionPoint_H_ */
#include <asn_internal.h>
