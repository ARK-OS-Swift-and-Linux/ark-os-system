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
 * Broadcom Cable Modem firmware format
 */

#ifndef __BCM933XX_HCS_H
#define __BCM933XX_HCS_H

#include <linux/types.h>

struct bcm_hcs {
	__u16 magic;
	__u16 control;
	__u16 rev_maj;
	__u16 rev_min;
	__u32 build_date;
	__u32 filelen;
	__u32 ldaddress;
	char filename[64];
	__u16 hcs;
	__u16 her_znaet_chto;
	__u32 crc;
};

#endif /* __BCM933XX_HCS */
