/* This file is autogenerated by pidl. DO NOT EDIT */
%module epmapper

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_epmapper_c.h"
#include "librpc/gen_ndr/epmapper.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}



%inline {
struct epmapper { struct dcerpc_pipe *pipe; };
}

%extend epmapper {
	epmapper (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct epmapper *ret = talloc(mem_ctx, struct epmapper);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_epmapper, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~epmapper() {
		talloc_free(self);
	}
	
	/* epm_Insert */
	uint32_t epm_Insert(uint32_t num_ents, struct epm_entry_t *entries, uint32_t replace, TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_Insert r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.num_ents = num_ents;
		r.in.entries = entries;
		r.in.replace = replace;
		
		status = dcerpc_epm_Insert(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* epm_Delete */
	uint32_t epm_Delete(uint32_t num_ents, struct epm_entry_t *entries, TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_Delete r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.num_ents = num_ents;
		r.in.entries = entries;
		
		status = dcerpc_epm_Delete(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* epm_Lookup */
	uint32_t epm_Lookup(uint32_t inquiry_type, struct GUID *object, struct rpc_if_id_t *interface_id, uint32_t vers_option, struct policy_handle *entry_handle, uint32_t max_ents, uint32_t *num_ents, struct epm_entry_t *entries, TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_Lookup r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.inquiry_type = inquiry_type;
		r.in.object = object;
		r.in.interface_id = interface_id;
		r.in.vers_option = vers_option;
		r.in.entry_handle = entry_handle;
		r.in.max_ents = max_ents;
		
		status = dcerpc_epm_Lookup(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*entry_handle = *r.out.entry_handle;
		*num_ents = *r.out.num_ents;
		/* FIXME: entries [out] argument is not a pointer */
		*entries = *r.out.entries;
		return r.out.result;
	}
	
	/* epm_Map */
	uint32_t epm_Map(struct GUID *object, struct epm_twr_t *map_tower, struct policy_handle *entry_handle, uint32_t max_towers, uint32_t *num_towers, struct epm_twr_p_t *towers, TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_Map r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.object = object;
		r.in.map_tower = map_tower;
		r.in.entry_handle = entry_handle;
		r.in.max_towers = max_towers;
		
		status = dcerpc_epm_Map(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*entry_handle = *r.out.entry_handle;
		*num_towers = *r.out.num_towers;
		/* FIXME: towers [out] argument is not a pointer */
		*towers = *r.out.towers;
		return r.out.result;
	}
	
	/* epm_LookupHandleFree */
	uint32_t epm_LookupHandleFree(struct policy_handle *entry_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_LookupHandleFree r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.entry_handle = entry_handle;
		
		status = dcerpc_epm_LookupHandleFree(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*entry_handle = *r.out.entry_handle;
		return r.out.result;
	}
	
	/* epm_InqObject */
	uint32_t epm_InqObject(struct GUID *epm_object, TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_InqObject r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.epm_object = epm_object;
		
		status = dcerpc_epm_InqObject(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* epm_MgmtDelete */
	uint32_t epm_MgmtDelete(uint32_t object_speced, struct GUID *object, struct epm_twr_t *tower, TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_MgmtDelete r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.object_speced = object_speced;
		r.in.object = object;
		r.in.tower = tower;
		
		status = dcerpc_epm_MgmtDelete(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* epm_MapAuth */
	uint32_t epm_MapAuth(TALLOC_CTX *mem_ctx = NULL)
	{
		struct epm_MapAuth r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_epm_MapAuth(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
};

/* epm_protocol */
/* epm_rhs_dnet_nsp */
/* epm_rhs_osi_tp4 */
/* epm_rhs_osi_clns */
/* epm_rhs_udp */
/* epm_rhs_tcp */
/* epm_rhs_ip */
/* epm_rhs_ncadg */
/* epm_rhs_ncacn */
/* epm_rhs_uuid */
/* epm_rhs_ipx */
/* epm_rhs_smb */
/* epm_rhs_pipe */
/* epm_rhs_netbios */
/* epm_rhs_netbeui */
/* epm_rhs_spx */
/* epm_rhs_nb_ipx */
/* epm_rhs_http */
/* epm_rhs_unix_ds */
/* epm_rhs_null */
/* epm_rhs_ncalrpc */
/* epm_rhs_appletalk */
/* epm_rhs_atalk_stream */
/* epm_rhs_atalk_datagram */
/* epm_rhs_vines_spp */
/* epm_rhs_vines_ipc */
/* epm_rhs_streettalk */
/* epm_rhs */
/* epm_lhs */
/* epm_floor */
/* epm_tower */
/* epm_twr_t */
/* epm_entry_t */
/* rpc_if_id_t */
/* epm_twr_p_t */
