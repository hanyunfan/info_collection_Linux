/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_audiosrv.h"
#include "librpc/gen_ndr/ndr_audiosrv_c.h"

/* audiosrv - client functions generated by pidl */


struct rpc_request *dcerpc_audiosrv_CreatezoneFactoriesList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreatezoneFactoriesList *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_CreatezoneFactoriesList, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_CREATEZONEFACTORIESLIST, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_CreatezoneFactoriesList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreatezoneFactoriesList *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_CreatezoneFactoriesList_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_CreatezoneFactoriesList, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_CreateGfxFactoriesList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxFactoriesList *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_CreateGfxFactoriesList, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_CREATEGFXFACTORIESLIST, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_CreateGfxFactoriesList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxFactoriesList *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_CreateGfxFactoriesList_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_CreateGfxFactoriesList, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_CreateGfxList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxList *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_CreateGfxList, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_CREATEGFXLIST, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_CreateGfxList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxList *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_CreateGfxList_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_CreateGfxList, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_RemoveGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RemoveGfx *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_RemoveGfx, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_REMOVEGFX, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_RemoveGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RemoveGfx *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_RemoveGfx_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_RemoveGfx, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_AddGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AddGfx *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_AddGfx, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_ADDGFX, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_AddGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AddGfx *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_AddGfx_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_AddGfx, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_ModifyGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_ModifyGfx *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_ModifyGfx, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_MODIFYGFX, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_ModifyGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_ModifyGfx *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_ModifyGfx_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_ModifyGfx, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_OpenGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_OpenGfx *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_OpenGfx, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_OPENGFX, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_OpenGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_OpenGfx *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_OpenGfx_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_OpenGfx, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_Logon_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logon *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_Logon, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_LOGON, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_Logon(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logon *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_Logon_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_Logon, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_Logoff_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logoff *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_Logoff, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_LOGOFF, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_Logoff(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logoff *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_Logoff_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_Logoff, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_RegisterSessionNotificationEvent_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RegisterSessionNotificationEvent *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_RegisterSessionNotificationEvent, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_REGISTERSESSIONNOTIFICATIONEVENT, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_RegisterSessionNotificationEvent(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RegisterSessionNotificationEvent *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_RegisterSessionNotificationEvent_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_RegisterSessionNotificationEvent, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_UnregisterSessionNotificationEvent_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_UnregisterSessionNotificationEvent *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_UnregisterSessionNotificationEvent, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_UNREGISTERSESSIONNOTIFICATIONEVENT, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_UnregisterSessionNotificationEvent(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_UnregisterSessionNotificationEvent *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_UnregisterSessionNotificationEvent_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_UnregisterSessionNotificationEvent, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_SessionConnectState_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_SessionConnectState *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_SessionConnectState, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_SESSIONCONNECTSTATE, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_SessionConnectState(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_SessionConnectState *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_SessionConnectState_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_SessionConnectState, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_DriverOpenDrvRegKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_DriverOpenDrvRegKey *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_DriverOpenDrvRegKey, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_DRIVEROPENDRVREGKEY, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_DriverOpenDrvRegKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_DriverOpenDrvRegKey *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_DriverOpenDrvRegKey_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_DriverOpenDrvRegKey, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_AdvisePreferredDeviceChange_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AdvisePreferredDeviceChange *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_AdvisePreferredDeviceChange, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_ADVISEPREFERREDDEVICECHANGE, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_AdvisePreferredDeviceChange(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AdvisePreferredDeviceChange *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_AdvisePreferredDeviceChange_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_AdvisePreferredDeviceChange, r);		
	}

	return status;
}

struct rpc_request *dcerpc_audiosrv_GetPnpInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_GetPnpInfo *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(audiosrv_GetPnpInfo, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_audiosrv, DCERPC_AUDIOSRV_GETPNPINFO, mem_ctx, r);
}

NTSTATUS dcerpc_audiosrv_GetPnpInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_GetPnpInfo *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_audiosrv_GetPnpInfo_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(audiosrv_GetPnpInfo, r);		
	}

	return status;
}