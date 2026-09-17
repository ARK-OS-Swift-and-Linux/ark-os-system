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
 *  Name                         : qnxtypes.h
 *  Author                       : Richard Frowijn
 *  Function                     : standard qnx types
 *  History                      : 22-03-1998 created
 *
 */

#ifndef _QNX4TYPES_H
#define _QNX4TYPES_H

#include <linux/types.h>

typedef __le16 qnx4_nxtnt_t;
typedef __u8  qnx4_ftype_t;

typedef struct {
	__le32 xtnt_blk;
	__le32 xtnt_size;
} qnx4_xtnt_t;

typedef __le16 qnx4_mode_t;
typedef __le16 qnx4_muid_t;
typedef __le16 qnx4_mgid_t;
typedef __le32 qnx4_off_t;
typedef __le16 qnx4_nlink_t;

#endif
