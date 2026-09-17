//
// Copyright 2026 Aarav Ravindra Kharade
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 * File: linux/nfsacl.h
 *
 * (C) 2003 Andreas Gruenbacher <agruen@suse.de>
 */
#ifndef __LINUX_NFSACL_H
#define __LINUX_NFSACL_H

#define NFS_ACL_PROGRAM	100227

#define ACLPROC2_NULL		0
#define ACLPROC2_GETACL		1
#define ACLPROC2_SETACL		2
#define ACLPROC2_GETATTR	3
#define ACLPROC2_ACCESS		4

#define ACLPROC3_NULL		0
#define ACLPROC3_GETACL		1
#define ACLPROC3_SETACL		2


/* Flags for the getacl/setacl mode */
#define NFS_ACL			0x0001
#define NFS_ACLCNT		0x0002
#define NFS_DFACL		0x0004
#define NFS_DFACLCNT		0x0008
#define NFS_ACL_MASK		0x000f

/* Flag for Default ACL entries */
#define NFS_ACL_DEFAULT		0x1000

#endif /* __LINUX_NFSACL_H */
