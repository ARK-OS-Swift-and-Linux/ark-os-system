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
 * These are the public elements of the Linux kernel NET/ROM implementation.
 * For kernel AX.25 see the file ax25.h. This file requires ax25.h for the
 * definition of the ax25_address structure.
 */

#ifndef	NETROM_KERNEL_H
#define	NETROM_KERNEL_H

#include <linux/ax25.h>

#define NETROM_MTU	236

#define NETROM_T1	1
#define NETROM_T2	2
#define NETROM_N2	3
#define	NETROM_T4	6
#define	NETROM_IDLE	7

#define	SIOCNRDECOBS		(SIOCPROTOPRIVATE+2)

struct nr_route_struct {
#define	NETROM_NEIGH	0
#define	NETROM_NODE	1
	int		type;
	ax25_address	callsign;
	char		device[16];
	unsigned int	quality;
	char		mnemonic[7];
	ax25_address	neighbour;
	unsigned int	obs_count;
	unsigned int	ndigis;
	ax25_address	digipeaters[AX25_MAX_DIGIS];
};

#endif
