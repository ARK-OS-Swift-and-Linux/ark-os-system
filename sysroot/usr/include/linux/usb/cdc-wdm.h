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
 * USB CDC Device Management userspace API definitions
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 */

#ifndef __LINUX_USB_CDC_WDM_H
#define __LINUX_USB_CDC_WDM_H

#include <linux/types.h>

/*
 * This IOCTL is used to retrieve the wMaxCommand for the device,
 * defining the message limit for both reading and writing.
 *
 * For CDC WDM functions this will be the wMaxCommand field of the
 * Device Management Functional Descriptor.
 */
#define IOCTL_WDM_MAX_COMMAND _IOR('H', 0xA0, __u16)

#endif /* __LINUX_USB_CDC_WDM_H */
