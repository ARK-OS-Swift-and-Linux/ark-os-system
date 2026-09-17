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
/* iptables module for using NFQUEUE mechanism
 *
 * (C) 2005 Harald Welte <laforge@netfilter.org>
 *
 * This software is distributed under GNU GPL v2, 1991
 * 
*/
#ifndef _XT_NFQ_TARGET_H
#define _XT_NFQ_TARGET_H

#include <linux/types.h>

/* target info */
struct xt_NFQ_info {
	__u16 queuenum;
};

struct xt_NFQ_info_v1 {
	__u16 queuenum;
	__u16 queues_total;
};

struct xt_NFQ_info_v2 {
	__u16 queuenum;
	__u16 queues_total;
	__u16 bypass;
};

struct xt_NFQ_info_v3 {
	__u16 queuenum;
	__u16 queues_total;
	__u16 flags;
#define NFQ_FLAG_BYPASS		0x01 /* for compatibility with v2 */
#define NFQ_FLAG_CPU_FANOUT	0x02 /* use current CPU (no hashing) */
#define NFQ_FLAG_MASK		0x03
};

#endif /* _XT_NFQ_TARGET_H */
