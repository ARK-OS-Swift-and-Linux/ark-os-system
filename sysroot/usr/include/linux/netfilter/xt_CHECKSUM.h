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
/* Header file for iptables ipt_CHECKSUM target
 *
 * (C) 2002 by Harald Welte <laforge@gnumonks.org>
 * (C) 2010 Red Hat Inc
 * Author: Michael S. Tsirkin <mst@redhat.com>
 *
 * This software is distributed under GNU GPL v2, 1991
*/
#ifndef _XT_CHECKSUM_TARGET_H
#define _XT_CHECKSUM_TARGET_H

#include <linux/types.h>

#define XT_CHECKSUM_OP_FILL	0x01	/* fill in checksum in IP header */

struct xt_CHECKSUM_info {
	__u8 operation;	/* bitset of operations */
};

#endif /* _XT_CHECKSUM_TARGET_H */
