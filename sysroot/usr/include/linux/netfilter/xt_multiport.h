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
#ifndef _XT_MULTIPORT_H
#define _XT_MULTIPORT_H

#include <linux/types.h>

enum xt_multiport_flags {
	XT_MULTIPORT_SOURCE,
	XT_MULTIPORT_DESTINATION,
	XT_MULTIPORT_EITHER
};

#define XT_MULTI_PORTS	15

/* Must fit inside union xt_matchinfo: 16 bytes */
struct xt_multiport {
	__u8 flags;				/* Type of comparison */
	__u8 count;				/* Number of ports */
	__u16 ports[XT_MULTI_PORTS];	/* Ports */
};

struct xt_multiport_v1 {
	__u8 flags;				/* Type of comparison */
	__u8 count;				/* Number of ports */
	__u16 ports[XT_MULTI_PORTS];	/* Ports */
	__u8 pflags[XT_MULTI_PORTS];	/* Port flags */
	__u8 invert;			/* Invert flag */
};

#endif /*_XT_MULTIPORT_H*/
