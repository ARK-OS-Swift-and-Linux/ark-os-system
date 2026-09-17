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
/* x_tables module for matching the IPv4/IPv6 DSCP field
 *
 * (C) 2002 Harald Welte <laforge@gnumonks.org>
 * This software is distributed under GNU GPL v2, 1991
 *
 * See RFC2474 for a description of the DSCP field within the IP Header.
 *
 * xt_dscp.h,v 1.3 2002/08/05 19:00:21 laforge Exp
*/
#ifndef _XT_DSCP_H
#define _XT_DSCP_H

#include <linux/types.h>

#define XT_DSCP_MASK	0xfc	/* 11111100 */
#define XT_DSCP_SHIFT	2
#define XT_DSCP_MAX	0x3f	/* 00111111 */

/* match info */
struct xt_dscp_info {
	__u8 dscp;
	__u8 invert;
};

struct xt_tos_match_info {
	__u8 tos_mask;
	__u8 tos_value;
	__u8 invert;
};

#endif /* _XT_DSCP_H */
