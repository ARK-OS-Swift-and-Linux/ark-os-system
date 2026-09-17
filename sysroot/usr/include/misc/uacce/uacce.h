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

/* SPDX-License-Identifier: GPL-2.0+ WITH Linux-syscall-note */
#ifndef UUACCE_H
#define UUACCE_H

#include <linux/types.h>
#include <linux/ioctl.h>

/*
 * UACCE_CMD_START_Q: Start queue
 */
#define UACCE_CMD_START_Q	_IO('W', 0)

/*
 * UACCE_CMD_PUT_Q:
 * User actively stop queue and free queue resource immediately
 * Optimization method since close fd may delay
 */
#define UACCE_CMD_PUT_Q		_IO('W', 1)

/*
 * UACCE Device flags:
 * UACCE_DEV_SVA: Shared Virtual Addresses
 *		  Support PASID
 *		  Support device page faults (PCI PRI or SMMU Stall)
 */
#define UACCE_DEV_SVA		BIT(0)

/**
 * enum uacce_qfrt: queue file region type
 * @UACCE_QFRT_MMIO: device mmio region
 * @UACCE_QFRT_DUS: device user share region
 */
enum uacce_qfrt {
	UACCE_QFRT_MMIO = 0,
	UACCE_QFRT_DUS = 1,
};

#endif
