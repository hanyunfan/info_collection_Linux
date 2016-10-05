/* header auto-generated by pidl */

#include "librpc/gen_ndr/security.h"

#ifndef _HEADER_NDR_security
#define _HEADER_NDR_security

#include "librpc/ndr/libndr.h"
#define DCERPC_SECURITY_CALL_COUNT (0)
NTSTATUS ndr_push_dom_sid(struct ndr_push *ndr, int ndr_flags, const struct dom_sid *r);
NTSTATUS ndr_pull_dom_sid(struct ndr_pull *ndr, int ndr_flags, struct dom_sid *r);
void ndr_print_dom_sid(struct ndr_print *ndr, const char *name, const struct dom_sid *r);
size_t ndr_size_dom_sid(const struct dom_sid *r, int flags);
void ndr_print_security_ace_flags(struct ndr_print *ndr, const char *name, uint8_t r);
void ndr_print_security_ace_type(struct ndr_print *ndr, const char *name, enum security_ace_type r);
void ndr_print_security_ace_object_flags(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_security_ace_object_type(struct ndr_print *ndr, const char *name, const union security_ace_object_type *r);
void ndr_print_security_ace_object_inherited_type(struct ndr_print *ndr, const char *name, const union security_ace_object_inherited_type *r);
void ndr_print_security_ace_object(struct ndr_print *ndr, const char *name, const struct security_ace_object *r);
void ndr_print_security_ace_object_ctr(struct ndr_print *ndr, const char *name, const union security_ace_object_ctr *r);
NTSTATUS ndr_push_security_ace(struct ndr_push *ndr, int ndr_flags, const struct security_ace *r);
NTSTATUS ndr_pull_security_ace(struct ndr_pull *ndr, int ndr_flags, struct security_ace *r);
void ndr_print_security_ace(struct ndr_print *ndr, const char *name, const struct security_ace *r);
size_t ndr_size_security_ace(const struct security_ace *r, int flags);
void ndr_print_security_acl_revision(struct ndr_print *ndr, const char *name, enum security_acl_revision r);
NTSTATUS ndr_push_security_acl(struct ndr_push *ndr, int ndr_flags, const struct security_acl *r);
NTSTATUS ndr_pull_security_acl(struct ndr_pull *ndr, int ndr_flags, struct security_acl *r);
void ndr_print_security_acl(struct ndr_print *ndr, const char *name, const struct security_acl *r);
size_t ndr_size_security_acl(const struct security_acl *r, int flags);
void ndr_print_security_descriptor_revision(struct ndr_print *ndr, const char *name, enum security_descriptor_revision r);
void ndr_print_security_descriptor_type(struct ndr_print *ndr, const char *name, uint16_t r);
NTSTATUS ndr_push_security_descriptor(struct ndr_push *ndr, int ndr_flags, const struct security_descriptor *r);
NTSTATUS ndr_pull_security_descriptor(struct ndr_pull *ndr, int ndr_flags, struct security_descriptor *r);
void ndr_print_security_descriptor(struct ndr_print *ndr, const char *name, const struct security_descriptor *r);
size_t ndr_size_security_descriptor(const struct security_descriptor *r, int flags);
NTSTATUS ndr_push_sec_desc_buf(struct ndr_push *ndr, int ndr_flags, const struct sec_desc_buf *r);
NTSTATUS ndr_pull_sec_desc_buf(struct ndr_pull *ndr, int ndr_flags, struct sec_desc_buf *r);
void ndr_print_sec_desc_buf(struct ndr_print *ndr, const char *name, const struct sec_desc_buf *r);
NTSTATUS ndr_push_security_token(struct ndr_push *ndr, int ndr_flags, const struct security_token *r);
NTSTATUS ndr_pull_security_token(struct ndr_pull *ndr, int ndr_flags, struct security_token *r);
void ndr_print_security_token(struct ndr_print *ndr, const char *name, const struct security_token *r);
NTSTATUS ndr_push_security_secinfo(struct ndr_push *ndr, int ndr_flags, uint32_t r);
NTSTATUS ndr_pull_security_secinfo(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_security_secinfo(struct ndr_print *ndr, const char *name, uint32_t r);
#endif /* _HEADER_NDR_security */