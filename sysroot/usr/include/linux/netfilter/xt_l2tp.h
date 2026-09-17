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
#ifndef _LINUX_NETFILTER_XT_L2TP_H
#define _LINUX_NETFILTER_XT_L2TP_H

#include <linux/types.h>

enum xt_l2tp_type {
	XT_L2TP_TYPE_CONTROL,
	XT_L2TP_TYPE_DATA,
};

/* L2TP matching stuff */
struct xt_l2tp_info {
	__u32 tid;			/* tunnel id */
	__u32 sid;			/* session id */
	__u8 version;			/* L2TP protocol version */
	__u8 type;			/* L2TP packet type */
	__u8 flags;			/* which fields to match */
};

enum {
	XT_L2TP_TID	= (1 << 0),	/* match L2TP tunnel id */
	XT_L2TP_SID	= (1 << 1),	/* match L2TP session id */
	XT_L2TP_VERSION	= (1 << 2),	/* match L2TP protocol version */
	XT_L2TP_TYPE	= (1 << 3),	/* match L2TP packet type */
};

#endif /* _LINUX_NETFILTER_XT_L2TP_H */
