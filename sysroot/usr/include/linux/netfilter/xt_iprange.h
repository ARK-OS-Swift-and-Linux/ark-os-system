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
#ifndef _LINUX_NETFILTER_XT_IPRANGE_H
#define _LINUX_NETFILTER_XT_IPRANGE_H 1

#include <linux/types.h>
#include <linux/netfilter.h>

enum {
	IPRANGE_SRC     = 1 << 0,	/* match source IP address */
	IPRANGE_DST     = 1 << 1,	/* match destination IP address */
	IPRANGE_SRC_INV = 1 << 4,	/* negate the condition */
	IPRANGE_DST_INV = 1 << 5,	/* -"- */
};

struct xt_iprange_mtinfo {
	union nf_inet_addr src_min, src_max;
	union nf_inet_addr dst_min, dst_max;
	__u8 flags;
};

#endif /* _LINUX_NETFILTER_XT_IPRANGE_H */
