/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../examples/rfc3280-PKIX1Implicit88.asn1"
 */

#ifndef	_KeyUsage_H_
#define	_KeyUsage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum KeyUsage {
	KeyUsage_digitalSignature	= 0,
	KeyUsage_nonRepudiation	= 1,
	KeyUsage_keyEncipherment	= 2,
	KeyUsage_dataEncipherment	= 3,
	KeyUsage_keyAgreement	= 4,
	KeyUsage_keyCertSign	= 5,
	KeyUsage_cRLSign	= 6,
	KeyUsage_encipherOnly	= 7,
	KeyUsage_decipherOnly	= 8
} e_KeyUsage;

/* KeyUsage */
typedef BIT_STRING_t	 KeyUsage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_KeyUsage;
asn_struct_free_f KeyUsage_free;
asn_struct_print_f KeyUsage_print;
asn_constr_check_f KeyUsage_constraint;
ber_type_decoder_f KeyUsage_decode_ber;
der_type_encoder_f KeyUsage_encode_der;
xer_type_decoder_f KeyUsage_decode_xer;
xer_type_encoder_f KeyUsage_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _KeyUsage_H_ */
#include <asn_internal.h>
