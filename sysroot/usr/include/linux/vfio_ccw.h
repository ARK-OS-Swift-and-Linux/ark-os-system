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
 * Interfaces for vfio-ccw
 *
 * Copyright IBM Corp. 2017
 *
 * Author(s): Dong Jia Shi <bjsdjshi@linux.vnet.ibm.com>
 */

#ifndef _VFIO_CCW_H_
#define _VFIO_CCW_H_

#include <linux/types.h>

/* used for START SUBCHANNEL, always present */
struct ccw_io_region {
#define ORB_AREA_SIZE 12
	__u8	orb_area[ORB_AREA_SIZE];
#define SCSW_AREA_SIZE 12
	__u8	scsw_area[SCSW_AREA_SIZE];
#define IRB_AREA_SIZE 96
	__u8	irb_area[IRB_AREA_SIZE];
	__u32	ret_code;
} __attribute__((packed));

/*
 * used for processing commands that trigger asynchronous actions
 * Note: this is controlled by a capability
 */
#define VFIO_CCW_ASYNC_CMD_HSCH (1 << 0)
#define VFIO_CCW_ASYNC_CMD_CSCH (1 << 1)
struct ccw_cmd_region {
	__u32 command;
	__u32 ret_code;
} __attribute__((packed));

/*
 * Used for processing commands that read the subchannel-information block
 * Reading this region triggers a stsch() to hardware
 * Note: this is controlled by a capability
 */
struct ccw_schib_region {
#define SCHIB_AREA_SIZE 52
	__u8 schib_area[SCHIB_AREA_SIZE];
} __attribute__((packed));

/*
 * Used for returning a Channel Report Word to userspace.
 * Note: this is controlled by a capability
 */
struct ccw_crw_region {
	__u32 crw;
	__u32 pad;
} __attribute__((packed));

#endif
