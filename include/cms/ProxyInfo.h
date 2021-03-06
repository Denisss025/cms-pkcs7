/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXAttributeCertificate"
 * 	found in "../rfc3281-PKIXAttributeCertificate.asn1"
 */

#ifndef	_ProxyInfo_H_
#define	_ProxyInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Targets;

/* ProxyInfo */
typedef struct ProxyInfo {
	A_SEQUENCE_OF(struct Targets) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProxyInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProxyInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Targets.h"

#endif	/* _ProxyInfo_H_ */
#include <asn_internal.h>
