/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../examples/rfc3280-PKIX1Implicit88.asn1"
 */

#ifndef	_InvalidityDate_H_
#define	_InvalidityDate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <GeneralizedTime.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InvalidityDate */
typedef GeneralizedTime_t	 InvalidityDate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InvalidityDate;
asn_struct_free_f InvalidityDate_free;
asn_struct_print_f InvalidityDate_print;
asn_constr_check_f InvalidityDate_constraint;
ber_type_decoder_f InvalidityDate_decode_ber;
der_type_encoder_f InvalidityDate_encode_der;
xer_type_decoder_f InvalidityDate_decode_xer;
xer_type_encoder_f InvalidityDate_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _InvalidityDate_H_ */
#include <asn_internal.h>
