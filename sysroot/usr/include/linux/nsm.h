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
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 */

#ifndef __UAPI_LINUX_NSM_H
#define __UAPI_LINUX_NSM_H

#include <linux/ioctl.h>
#include <linux/types.h>

#define NSM_MAGIC		0x0A

#define NSM_REQUEST_MAX_SIZE	0x1000
#define NSM_RESPONSE_MAX_SIZE	0x3000

struct nsm_iovec {
	__u64 addr; /* Virtual address of target buffer */
	__u64 len;  /* Length of target buffer */
};

/* Raw NSM message. Only available with CAP_SYS_ADMIN. */
struct nsm_raw {
	/* Request from user */
	struct nsm_iovec request;
	/* Response to user */
	struct nsm_iovec response;
};
#define NSM_IOCTL_RAW		_IOWR(NSM_MAGIC, 0x0, struct nsm_raw)

#endif /* __UAPI_LINUX_NSM_H */
