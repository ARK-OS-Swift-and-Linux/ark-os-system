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

/* SPDX-License-Identifier: GPL-1.0+ WITH Linux-syscall-note */
#ifndef __LINUX_ARP_NETFILTER_H
#define __LINUX_ARP_NETFILTER_H

/* ARP-specific defines for netfilter.
 * (C)2002 Rusty Russell IBM -- This code is GPL.
 */

#include <linux/netfilter.h>

/* There is no PF_ARP. */
#define NF_ARP		0

/* ARP Hooks */
#define NF_ARP_IN	0
#define NF_ARP_OUT	1
#define NF_ARP_FORWARD	2

#define NF_ARP_NUMHOOKS	3

#endif /* __LINUX_ARP_NETFILTER_H */
