/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../examples/rfc3280-PKIX1Explicit88.asn1"
 */

#ifndef	_PostOfficeBoxAddress_H_
#define	_PostOfficeBoxAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDSParameter.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PostOfficeBoxAddress */
typedef PDSParameter_t	 PostOfficeBoxAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PostOfficeBoxAddress;
asn_struct_free_f PostOfficeBoxAddress_free;
asn_struct_print_f PostOfficeBoxAddress_print;
asn_constr_check_f PostOfficeBoxAddress_constraint;
ber_type_decoder_f PostOfficeBoxAddress_decode_ber;
der_type_encoder_f PostOfficeBoxAddress_encode_der;
xer_type_decoder_f PostOfficeBoxAddress_decode_xer;
xer_type_encoder_f PostOfficeBoxAddress_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PostOfficeBoxAddress_H_ */
#include <asn_internal.h>
