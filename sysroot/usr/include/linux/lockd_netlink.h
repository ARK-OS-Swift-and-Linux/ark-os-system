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
/*	Documentation/netlink/specs/lockd.yaml */
/* YNL-GEN uapi header */
/* To regenerate run: tools/net/ynl/ynl-regen.sh */

#ifndef _LINUX_LOCKD_NETLINK_H
#define _LINUX_LOCKD_NETLINK_H

#define LOCKD_FAMILY_NAME	"lockd"
#define LOCKD_FAMILY_VERSION	1

enum {
	LOCKD_A_SERVER_GRACETIME = 1,
	LOCKD_A_SERVER_TCP_PORT,
	LOCKD_A_SERVER_UDP_PORT,

	__LOCKD_A_SERVER_MAX,
	LOCKD_A_SERVER_MAX = (__LOCKD_A_SERVER_MAX - 1)
};

enum {
	LOCKD_CMD_SERVER_SET = 1,
	LOCKD_CMD_SERVER_GET,

	__LOCKD_CMD_MAX,
	LOCKD_CMD_MAX = (__LOCKD_CMD_MAX - 1)
};

#endif /* _LINUX_LOCKD_NETLINK_H */
