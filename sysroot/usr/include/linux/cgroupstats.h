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

/* SPDX-License-Identifier: LGPL-2.1 WITH Linux-syscall-note */
/* cgroupstats.h - exporting per-cgroup statistics
 *
 * Copyright IBM Corporation, 2007
 * Author Balbir Singh <balbir@linux.vnet.ibm.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2.1 of the GNU Lesser General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef _LINUX_CGROUPSTATS_H
#define _LINUX_CGROUPSTATS_H

#include <linux/types.h>
#include <linux/taskstats.h>

/*
 * Data shared between user space and kernel space on a per cgroup
 * basis. This data is shared using taskstats.
 *
 * Most of these states are derived by looking at the task->state value
 *
 * Each member is aligned to a 8 byte boundary.
 */
struct cgroupstats {
	__u64	nr_sleeping;		/* Number of tasks sleeping */
	__u64	nr_running;		/* Number of tasks running */
	__u64	nr_stopped;		/* Number of tasks in stopped state */
	__u64	nr_uninterruptible;	/* Number of tasks in uninterruptible */
					/* state */
	__u64	nr_io_wait;		/* Number of tasks waiting on IO */
};

/*
 * Commands sent from userspace
 * Not versioned. New commands should only be inserted at the enum's end
 * prior to __CGROUPSTATS_CMD_MAX
 */

enum {
	CGROUPSTATS_CMD_UNSPEC = __TASKSTATS_CMD_MAX,	/* Reserved */
	CGROUPSTATS_CMD_GET,		/* user->kernel request/get-response */
	CGROUPSTATS_CMD_NEW,		/* kernel->user event */
	__CGROUPSTATS_CMD_MAX,
};

#define CGROUPSTATS_CMD_MAX (__CGROUPSTATS_CMD_MAX - 1)

enum {
	CGROUPSTATS_TYPE_UNSPEC = 0,	/* Reserved */
	CGROUPSTATS_TYPE_CGROUP_STATS,	/* contains name + stats */
	__CGROUPSTATS_TYPE_MAX,
};

#define CGROUPSTATS_TYPE_MAX (__CGROUPSTATS_TYPE_MAX - 1)

enum {
	CGROUPSTATS_CMD_ATTR_UNSPEC = 0,
	CGROUPSTATS_CMD_ATTR_FD,
	__CGROUPSTATS_CMD_ATTR_MAX,
};

#define CGROUPSTATS_CMD_ATTR_MAX (__CGROUPSTATS_CMD_ATTR_MAX - 1)

#endif /* _LINUX_CGROUPSTATS_H */
