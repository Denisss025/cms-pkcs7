/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../examples/rfc3280-PKIX1Implicit88.asn1"
 */

#ifndef	_InhibitAnyPolicy_H_
#define	_InhibitAnyPolicy_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SkipCerts.h"

#ifdef __cplusplus
extern "C" {
#endif

/* InhibitAnyPolicy */
typedef SkipCerts_t	 InhibitAnyPolicy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InhibitAnyPolicy;
asn_struct_free_f InhibitAnyPolicy_free;
asn_struct_print_f InhibitAnyPolicy_print;
asn_constr_check_f InhibitAnyPolicy_constraint;
ber_type_decoder_f InhibitAnyPolicy_decode_ber;
der_type_encoder_f InhibitAnyPolicy_encode_der;
xer_type_decoder_f InhibitAnyPolicy_decode_xer;
xer_type_encoder_f InhibitAnyPolicy_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _InhibitAnyPolicy_H_ */
#include <asn_internal.h>
