/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_remact.h"
#include "librpc/gen_ndr/ndr_remact_c.h"

/* IRemoteActivation - client functions generated by pidl */


struct rpc_request *dcerpc_RemoteActivation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteActivation *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(RemoteActivation, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_IRemoteActivation, DCERPC_REMOTEACTIVATION, mem_ctx, r);
}

NTSTATUS dcerpc_RemoteActivation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteActivation *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_RemoteActivation_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(RemoteActivation, r);		
	}

	return status;
}