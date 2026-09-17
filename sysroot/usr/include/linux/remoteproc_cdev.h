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

/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note */
/*
 * IOCTLs for Remoteproc's character device interface.
 *
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef _REMOTEPROC_CDEV_H_
#define _REMOTEPROC_CDEV_H_

#include <linux/ioctl.h>
#include <linux/types.h>

#define RPROC_MAGIC	0xB7

/*
 * The RPROC_SET_SHUTDOWN_ON_RELEASE ioctl allows to enable/disable the shutdown of a remote
 * processor automatically when the controlling userpsace closes the char device interface.
 *
 * input parameter: integer
 *   0		: disable automatic shutdown
 *   other	: enable automatic shutdown
 */
#define RPROC_SET_SHUTDOWN_ON_RELEASE _IOW(RPROC_MAGIC, 1, __s32)

/*
 * The RPROC_GET_SHUTDOWN_ON_RELEASE ioctl gets information about whether the automatic shutdown of
 * a remote processor is enabled or disabled when the controlling userspace closes the char device
 * interface.
 *
 * output parameter: integer
 *   0		: automatic shutdown disable
 *   other	: automatic shutdown enable
 */
#define RPROC_GET_SHUTDOWN_ON_RELEASE _IOR(RPROC_MAGIC, 2, __s32)

#endif
