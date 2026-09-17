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
#ifndef	__BPQETHER_H
#define	__BPQETHER_H

/*
 * 	Defines for the BPQETHER pseudo device driver
 */

#include <linux/if_ether.h>

#define SIOCSBPQETHOPT		(SIOCDEVPRIVATE+0)	/* reserved */
#define SIOCSBPQETHADDR		(SIOCDEVPRIVATE+1)
 
struct bpq_ethaddr {
	unsigned char destination[ETH_ALEN];
	unsigned char accept[ETH_ALEN];
};

/* 
 * For SIOCSBPQETHOPT - this is compatible with PI2/PacketTwin card drivers,
 * currently not implemented, though. If someone wants to hook a radio
 * to his Ethernet card he may find this useful. ;-)
 */

#define SIOCGBPQETHPARAM	0x5000  /* get Level 1 parameters */
#define SIOCSBPQETHPARAM	0x5001  /* set */

struct bpq_req  {
    int cmd;
    int speed;			/* unused */
    int clockmode;		/* unused */
    int txdelay;
    unsigned char persist;	/* unused */
    int slotime;		/* unused */
    int squeldelay;
    int dmachan;		/* unused */
    int irq;			/* unused */
};

#endif
