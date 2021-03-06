/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "../rfc5652-CryptographicMessageSyntax2004.asn1"
 */

#ifndef	_MessageAuthenticationCodeAlgorithm_H_
#define	_MessageAuthenticationCodeAlgorithm_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MessageAuthenticationCodeAlgorithm */
typedef AlgorithmIdentifier_t	 MessageAuthenticationCodeAlgorithm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MessageAuthenticationCodeAlgorithm;
asn_struct_free_f MessageAuthenticationCodeAlgorithm_free;
asn_struct_print_f MessageAuthenticationCodeAlgorithm_print;
asn_constr_check_f MessageAuthenticationCodeAlgorithm_constraint;
ber_type_decoder_f MessageAuthenticationCodeAlgorithm_decode_ber;
der_type_encoder_f MessageAuthenticationCodeAlgorithm_encode_der;
xer_type_decoder_f MessageAuthenticationCodeAlgorithm_decode_xer;
xer_type_encoder_f MessageAuthenticationCodeAlgorithm_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _MessageAuthenticationCodeAlgorithm_H_ */
#include <asn_internal.h>
