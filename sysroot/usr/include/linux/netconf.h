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
#ifndef _LINUX_NETCONF_H_
#define _LINUX_NETCONF_H_

#include <linux/types.h>
#include <linux/netlink.h>

struct netconfmsg {
	__u8	ncm_family;
};

enum {
	NETCONFA_UNSPEC,
	NETCONFA_IFINDEX,
	NETCONFA_FORWARDING,
	NETCONFA_RP_FILTER,
	NETCONFA_MC_FORWARDING,
	NETCONFA_PROXY_NEIGH,
	NETCONFA_IGNORE_ROUTES_WITH_LINKDOWN,
	NETCONFA_INPUT,
	NETCONFA_BC_FORWARDING,
	NETCONFA_FORCE_FORWARDING,
	__NETCONFA_MAX
};
#define NETCONFA_MAX	(__NETCONFA_MAX - 1)
#define NETCONFA_ALL	-1

#define NETCONFA_IFINDEX_ALL		-1
#define NETCONFA_IFINDEX_DEFAULT	-2

#endif /* _LINUX_NETCONF_H_ */
