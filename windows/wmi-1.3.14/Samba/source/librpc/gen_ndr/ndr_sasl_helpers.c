/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_sasl_helpers.h"

_PUBLIC_ NTSTATUS ndr_push_saslauthdRequest(struct ndr_push *ndr, int ndr_flags, const struct saslauthdRequest *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 2));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, strlen_m(r->authid)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->authid, strlen_m(r->authid), sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->passwd_length));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->passwd, r->passwd_length));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, strlen_m(r->service)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->service, strlen_m(r->service), sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, strlen_m(r->realm)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->realm, strlen_m(r->realm), sizeof(uint8_t), CH_UTF8));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_saslauthdRequest(struct ndr_pull *ndr, int ndr_flags, struct saslauthdRequest *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 2));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->authid_length));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->authid, r->authid_length, sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->passwd_length));
			NDR_PULL_ALLOC_N(ndr, r->passwd, r->passwd_length);
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->passwd, r->passwd_length));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->service_length));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->service, r->service_length, sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->realm_length));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->realm, r->realm_length, sizeof(uint8_t), CH_UTF8));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_saslauthdRequest(struct ndr_print *ndr, const char *name, const struct saslauthdRequest *r)
{
	ndr_print_struct(ndr, name, "saslauthdRequest");
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX);
		ndr->depth++;
		ndr_print_uint16(ndr, "authid_length", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?strlen_m(r->authid):r->authid_length);
		ndr_print_string(ndr, "authid", r->authid);
		ndr_print_uint16(ndr, "passwd_length", r->passwd_length);
		ndr_print_array_uint8(ndr, "passwd", r->passwd, r->passwd_length);
		ndr_print_uint16(ndr, "service_length", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?strlen_m(r->service):r->service_length);
		ndr_print_string(ndr, "service", r->service);
		ndr_print_uint16(ndr, "realm_length", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?strlen_m(r->realm):r->realm_length);
		ndr_print_string(ndr, "realm", r->realm);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

static NTSTATUS ndr_push_decode_saslauthd(struct ndr_push *ndr, int flags, const struct decode_saslauthd *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_saslauthdRequest(ndr, NDR_SCALARS, &r->in.req));
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_decode_saslauthd(struct ndr_pull *ndr, int flags, struct decode_saslauthd *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_pull_saslauthdRequest(ndr, NDR_SCALARS, &r->in.req));
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_decode_saslauthd(struct ndr_print *ndr, const char *name, int flags, const struct decode_saslauthd *r)
{
	ndr_print_struct(ndr, name, "decode_saslauthd");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "decode_saslauthd");
		ndr->depth++;
		ndr_print_saslauthdRequest(ndr, "req", &r->in.req);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "decode_saslauthd");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}
