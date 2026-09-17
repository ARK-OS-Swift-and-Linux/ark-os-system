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

/* SPDX-License-Identifier: ((GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause) */
/* Do not edit directly, auto-generated from: */
/*	Documentation/netlink/specs/binder.yaml */
/* YNL-GEN uapi header */
/* To regenerate run: tools/net/ynl/ynl-regen.sh */

#ifndef _LINUX_ANDROID_BINDER_NETLINK_H
#define _LINUX_ANDROID_BINDER_NETLINK_H

#define BINDER_FAMILY_NAME	"binder"
#define BINDER_FAMILY_VERSION	1

enum {
	BINDER_A_REPORT_ERROR = 1,
	BINDER_A_REPORT_CONTEXT,
	BINDER_A_REPORT_FROM_PID,
	BINDER_A_REPORT_FROM_TID,
	BINDER_A_REPORT_TO_PID,
	BINDER_A_REPORT_TO_TID,
	BINDER_A_REPORT_IS_REPLY,
	BINDER_A_REPORT_FLAGS,
	BINDER_A_REPORT_CODE,
	BINDER_A_REPORT_DATA_SIZE,

	__BINDER_A_REPORT_MAX,
	BINDER_A_REPORT_MAX = (__BINDER_A_REPORT_MAX - 1)
};

enum {
	BINDER_CMD_REPORT = 1,

	__BINDER_CMD_MAX,
	BINDER_CMD_MAX = (__BINDER_CMD_MAX - 1)
};

#define BINDER_MCGRP_REPORT	"report"

#endif /* _LINUX_ANDROID_BINDER_NETLINK_H */
