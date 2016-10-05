/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_winstation.h"

static NTSTATUS ndr_push_winstation_foo(struct ndr_push *ndr, int flags, const struct winstation_foo *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_winstation_foo(struct ndr_pull *ndr, int flags, struct winstation_foo *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_winstation_foo(struct ndr_print *ndr, const char *name, int flags, const struct winstation_foo *r)
{
	ndr_print_struct(ndr, name, "winstation_foo");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "winstation_foo");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "winstation_foo");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct dcerpc_interface_call winstation_calls[] = {
	{
		"winstation_foo",
		sizeof(struct winstation_foo),
		(ndr_push_flags_fn_t) ndr_push_winstation_foo,
		(ndr_pull_flags_fn_t) ndr_pull_winstation_foo,
		(ndr_print_function_t) ndr_print_winstation_foo,
		False,
	},
	{ NULL, 0, NULL, NULL, NULL, False }
};

static const char * const winstation_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\winstation]", 
};

static const struct dcerpc_endpoint_list winstation_endpoints = {
	.count	= 1,
	.names	= winstation_endpoint_strings
};

static const char * const winstation_authservice_strings[] = {
	"host", 
};

static const struct dcerpc_authservice_list winstation_authservices = {
	.count	= 1,
	.names	= winstation_authservice_strings
};


const struct dcerpc_interface_table dcerpc_table_winstation = {
	.name		= "winstation",
	.syntax_id	= {
		{0x5ca4a760,0xebb1,0x11cf,{0x86,0x11},{0x00,0xa0,0x24,0x54,0x20,0xed}},
		DCERPC_WINSTATION_VERSION
	},
	.helpstring	= DCERPC_WINSTATION_HELPSTRING,
	.num_calls	= 1,
	.calls		= winstation_calls,
	.endpoints	= &winstation_endpoints,
	.authservices	= &winstation_authservices
};
