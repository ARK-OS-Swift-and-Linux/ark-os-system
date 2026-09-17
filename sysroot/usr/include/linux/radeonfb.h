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
#ifndef __LINUX_RADEONFB_H__
#define __LINUX_RADEONFB_H__

#include <asm/ioctl.h>
#include <linux/types.h>

#define ATY_RADEON_LCD_ON	0x00000001
#define ATY_RADEON_CRT_ON	0x00000002


#define FBIO_RADEON_GET_MIRROR	_IOR('@', 3, size_t)
#define FBIO_RADEON_SET_MIRROR	_IOW('@', 4, size_t)

#endif

