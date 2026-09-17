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
/*
 *  Copyright (C) 2005-2007 Jiri Slaby <jirislaby@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 */

#ifndef __PHANTOM_H
#define __PHANTOM_H

#include <linux/types.h>

/* PHN_(G/S)ET_REG param */
struct phm_reg {
	__u32 reg;
	__u32 value;
};

/* PHN_(G/S)ET_REGS param */
struct phm_regs {
	__u32 count;
	__u32 mask;
	__u32 values[8];
};

#define PH_IOC_MAGIC		'p'
#define PHN_GET_REG		_IOWR(PH_IOC_MAGIC, 0, struct phm_reg *)
#define PHN_SET_REG		_IOW(PH_IOC_MAGIC, 1, struct phm_reg *)
#define PHN_GET_REGS		_IOWR(PH_IOC_MAGIC, 2, struct phm_regs *)
#define PHN_SET_REGS		_IOW(PH_IOC_MAGIC, 3, struct phm_regs *)
/* this ioctl tells the driver, that the caller is not OpenHaptics and might
 * use improved registers update (no more phantom switchoffs when using
 * libphantom) */
#define PHN_NOT_OH		_IO(PH_IOC_MAGIC, 4)
#define PHN_GETREG		_IOWR(PH_IOC_MAGIC, 5, struct phm_reg)
#define PHN_SETREG		_IOW(PH_IOC_MAGIC, 6, struct phm_reg)
#define PHN_GETREGS		_IOWR(PH_IOC_MAGIC, 7, struct phm_regs)
#define PHN_SETREGS		_IOW(PH_IOC_MAGIC, 8, struct phm_regs)

#define PHN_CONTROL		0x6     /* control byte in iaddr space */
#define PHN_CTL_AMP		0x1     /*   switch after torques change */
#define PHN_CTL_BUT		0x2     /*   is button switched */
#define PHN_CTL_IRQ		0x10    /*   is irq enabled */

#define PHN_ZERO_FORCE		2048	/* zero torque on motor */

#endif
