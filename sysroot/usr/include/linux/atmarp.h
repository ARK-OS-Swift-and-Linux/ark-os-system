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
/* atmarp.h - ATM ARP protocol and kernel-demon interface definitions */
 
/* Written 1995-1999 by Werner Almesberger, EPFL LRC/ICA */
 

#ifndef _LINUX_ATMARP_H
#define _LINUX_ATMARP_H

#include <linux/types.h>
#include <linux/atmapi.h>
#include <linux/atmioc.h>


#define ATMARP_RETRY_DELAY 30		/* request next resolution or forget
					   NAK after 30 sec - should go into
					   atmclip.h */
#define ATMARP_MAX_UNRES_PACKETS 5	/* queue that many packets while
					   waiting for the resolver */


#define ATMARPD_CTRL	_IO('a',ATMIOC_CLIP+1)	/* become atmarpd ctrl sock */
#define ATMARP_MKIP	_IO('a',ATMIOC_CLIP+2)	/* attach socket to IP */
#define ATMARP_SETENTRY	_IO('a',ATMIOC_CLIP+3)	/* fill or hide ARP entry */
#define ATMARP_ENCAP	_IO('a',ATMIOC_CLIP+5)	/* change encapsulation */


enum atmarp_ctrl_type {
	act_invalid,		/* catch uninitialized structures */
	act_need,		/* need address resolution */
	act_up,			/* interface is coming up */
	act_down,		/* interface is going down */
	act_change		/* interface configuration has changed */
};

struct atmarp_ctrl {
	enum atmarp_ctrl_type	type;	/* message type */
	int			itf_num;/* interface number (if present) */
	__be32			ip;	/* IP address (act_need only) */
};

#endif
