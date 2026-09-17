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

/* SPDX-License-Identifier: GPL-2.0+ WITH Linux-syscall-note */
/*
 *  SR-IPv6 implementation
 *
 *  Author:
 *  David Lebrun <david.lebrun@uclouvain.be>
 *
 *
 *  This program is free software; you can redistribute it and/or
 *      modify it under the terms of the GNU General Public License
 *      as published by the Free Software Foundation; either version
 *      2 of the License, or (at your option) any later version.
 */

#ifndef _LINUX_SEG6_H
#define _LINUX_SEG6_H

#include <linux/types.h>
#include <linux/in6.h>		/* For struct in6_addr. */

/*
 * SRH
 */
struct ipv6_sr_hdr {
	__u8	nexthdr;
	__u8	hdrlen;
	__u8	type;
	__u8	segments_left;
	__u8	first_segment; /* Represents the last_entry field of SRH */
	__u8	flags;
	__u16	tag;

	struct in6_addr segments[];
};

#define SR6_FLAG1_PROTECTED	(1 << 6)
#define SR6_FLAG1_OAM		(1 << 5)
#define SR6_FLAG1_ALERT		(1 << 4)
#define SR6_FLAG1_HMAC		(1 << 3)

#define SR6_TLV_INGRESS		1
#define SR6_TLV_EGRESS		2
#define SR6_TLV_OPAQUE		3
#define SR6_TLV_PADDING		4
#define SR6_TLV_HMAC		5

#define sr_has_hmac(srh) ((srh)->flags & SR6_FLAG1_HMAC)

struct sr6_tlv {
	__u8 type;
	__u8 len;
	__u8 data[0];
};

#endif
