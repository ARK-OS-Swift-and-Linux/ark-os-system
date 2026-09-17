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
 *  ebt_ip6
 *
 *	Authors:
 * Kuo-Lang Tseng <kuo-lang.tseng@intel.com>
 * Manohar Castelino <manohar.r.castelino@intel.com>
 *
 *  Jan 11, 2008
 *
 */

#ifndef __LINUX_BRIDGE_EBT_IP6_H
#define __LINUX_BRIDGE_EBT_IP6_H

#include <linux/types.h>
#include <linux/in6.h>

#define EBT_IP6_SOURCE 0x01
#define EBT_IP6_DEST 0x02
#define EBT_IP6_TCLASS 0x04
#define EBT_IP6_PROTO 0x08
#define EBT_IP6_SPORT 0x10
#define EBT_IP6_DPORT 0x20
#define EBT_IP6_ICMP6 0x40

#define EBT_IP6_MASK (EBT_IP6_SOURCE | EBT_IP6_DEST | EBT_IP6_TCLASS |\
		      EBT_IP6_PROTO | EBT_IP6_SPORT | EBT_IP6_DPORT | \
		      EBT_IP6_ICMP6)
#define EBT_IP6_MATCH "ip6"

/* the same values are used for the invflags */
struct ebt_ip6_info {
	struct in6_addr saddr;
	struct in6_addr daddr;
	struct in6_addr smsk;
	struct in6_addr dmsk;
	__u8  tclass;
	__u8  protocol;
	__u8  bitmask;
	__u8  invflags;
	union {
		__u16 sport[2];
		__u8 icmpv6_type[2];
	};
	union {
		__u16 dport[2];
		__u8 icmpv6_code[2];
	};
};

#endif
