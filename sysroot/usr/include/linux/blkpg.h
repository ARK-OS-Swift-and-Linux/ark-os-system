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
#ifndef __LINUX_BLKPG_H
#define __LINUX_BLKPG_H


#include <linux/ioctl.h>

#define BLKPG      _IO(0x12,105)

/* The argument structure */
struct blkpg_ioctl_arg {
        int op;
        int flags;
        int datalen;
        void *data;
};

/* The subfunctions (for the op field) */
#define BLKPG_ADD_PARTITION	1
#define BLKPG_DEL_PARTITION	2
#define BLKPG_RESIZE_PARTITION	3

/* Sizes of name fields. Unused at present. */
#define BLKPG_DEVNAMELTH	64
#define BLKPG_VOLNAMELTH	64

/* The data structure for ADD_PARTITION and DEL_PARTITION */
struct blkpg_partition {
	long long start;		/* starting offset in bytes */
	long long length;		/* length in bytes */
	int pno;			/* partition number */
	char devname[BLKPG_DEVNAMELTH];	/* unused / ignored */
	char volname[BLKPG_VOLNAMELTH];	/* unused / ignore */
};

#endif /* __LINUX_BLKPG_H */
