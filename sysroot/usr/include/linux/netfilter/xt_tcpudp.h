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
#ifndef _XT_TCPUDP_H
#define _XT_TCPUDP_H

#include <linux/types.h>

/* TCP matching stuff */
struct xt_tcp {
	__u16 spts[2];			/* Source port range. */
	__u16 dpts[2];			/* Destination port range. */
	__u8 option;			/* TCP Option iff non-zero*/
	__u8 flg_mask;			/* TCP flags mask byte */
	__u8 flg_cmp;			/* TCP flags compare byte */
	__u8 invflags;			/* Inverse flags */
};

/* Values for "inv" field in struct ipt_tcp. */
#define XT_TCP_INV_SRCPT	0x01	/* Invert the sense of source ports. */
#define XT_TCP_INV_DSTPT	0x02	/* Invert the sense of dest ports. */
#define XT_TCP_INV_FLAGS	0x04	/* Invert the sense of TCP flags. */
#define XT_TCP_INV_OPTION	0x08	/* Invert the sense of option test. */
#define XT_TCP_INV_MASK		0x0F	/* All possible flags. */

/* UDP matching stuff */
struct xt_udp {
	__u16 spts[2];			/* Source port range. */
	__u16 dpts[2];			/* Destination port range. */
	__u8 invflags;			/* Inverse flags */
};

/* Values for "invflags" field in struct ipt_udp. */
#define XT_UDP_INV_SRCPT	0x01	/* Invert the sense of source ports. */
#define XT_UDP_INV_DSTPT	0x02	/* Invert the sense of dest ports. */
#define XT_UDP_INV_MASK	0x03	/* All possible flags. */


#endif
