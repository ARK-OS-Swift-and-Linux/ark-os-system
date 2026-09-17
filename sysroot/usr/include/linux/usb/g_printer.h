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
 * g_printer.h -- Header file for USB Printer gadget driver
 *
 * Copyright (C) 2007 Craig W. Nadler
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_USB_G_PRINTER_H
#define __LINUX_USB_G_PRINTER_H

#define PRINTER_NOT_ERROR	0x08
#define PRINTER_SELECTED	0x10
#define PRINTER_PAPER_EMPTY	0x20

/* The 'g' code is also used by gadgetfs ioctl requests.
 * Don't add any colliding codes to either driver, and keep
 * them in unique ranges (size 0x20 for now).
 */
#define GADGET_GET_PRINTER_STATUS	_IOR('g', 0x21, unsigned char)
#define GADGET_SET_PRINTER_STATUS	_IOWR('g', 0x22, unsigned char)

#endif /* __LINUX_USB_G_PRINTER_H */
