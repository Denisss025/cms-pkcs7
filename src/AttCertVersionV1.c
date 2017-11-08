/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "AttributeCertificateVersion1"
 * 	found in "../rfc5652-AttributeCertificateVersion1.asn1"
 */

#include "AttCertVersionV1.h"

int
AttCertVersionV1_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_INTEGER.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using INTEGER,
 * so here we adjust the DEF accordingly.
 */
static void
AttCertVersionV1_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_INTEGER.free_struct;
	td->print_struct   = asn_DEF_INTEGER.print_struct;
	td->ber_decoder    = asn_DEF_INTEGER.ber_decoder;
	td->der_encoder    = asn_DEF_INTEGER.der_encoder;
	td->xer_decoder    = asn_DEF_INTEGER.xer_decoder;
	td->xer_encoder    = asn_DEF_INTEGER.xer_encoder;
	td->uper_decoder   = asn_DEF_INTEGER.uper_decoder;
	td->uper_encoder   = asn_DEF_INTEGER.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_INTEGER.per_constraints;
	td->elements       = asn_DEF_INTEGER.elements;
	td->elements_count = asn_DEF_INTEGER.elements_count;
	td->specifics      = asn_DEF_INTEGER.specifics;
}

void
AttCertVersionV1_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	AttCertVersionV1_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
AttCertVersionV1_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	AttCertVersionV1_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
AttCertVersionV1_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	AttCertVersionV1_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
AttCertVersionV1_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AttCertVersionV1_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
AttCertVersionV1_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	AttCertVersionV1_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
AttCertVersionV1_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AttCertVersionV1_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static ber_tlv_tag_t asn_DEF_AttCertVersionV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AttCertVersionV1 = {
	"AttCertVersionV1",
	"AttCertVersionV1",
	AttCertVersionV1_free,
	AttCertVersionV1_print,
	AttCertVersionV1_constraint,
	AttCertVersionV1_decode_ber,
	AttCertVersionV1_encode_der,
	AttCertVersionV1_decode_xer,
	AttCertVersionV1_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AttCertVersionV1_tags_1,
	sizeof(asn_DEF_AttCertVersionV1_tags_1)
		/sizeof(asn_DEF_AttCertVersionV1_tags_1[0]), /* 1 */
	asn_DEF_AttCertVersionV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_AttCertVersionV1_tags_1)
		/sizeof(asn_DEF_AttCertVersionV1_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};
