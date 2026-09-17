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

/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
/*
 * net.h
 *
 * Copyright (C) 2000 Marcus Metzler <marcus@convergence.de>
 *                  & Ralph  Metzler <ralph@convergence.de>
 *                    for convergence integrated media GmbH
 */

#ifndef _DVBNET_H_
#define _DVBNET_H_

#include <linux/types.h>

/**
 * struct dvb_net_if - describes a DVB network interface
 *
 * @pid: Packet ID (PID) of the MPEG-TS that contains data
 * @if_num: number of the Digital TV interface.
 * @feedtype: Encapsulation type of the feed.
 *
 * A MPEG-TS stream may contain packet IDs with IP packages on it.
 * This struct describes it, and the type of encoding.
 *
 * @feedtype can be:
 *
 *	- %DVB_NET_FEEDTYPE_MPE for MPE encoding
 *	- %DVB_NET_FEEDTYPE_ULE for ULE encoding.
 */
struct dvb_net_if {
	__u16 pid;
	__u16 if_num;
	__u8  feedtype;
#define DVB_NET_FEEDTYPE_MPE 0	/* multi protocol encapsulation */
#define DVB_NET_FEEDTYPE_ULE 1	/* ultra lightweight encapsulation */
};


#define NET_ADD_IF    _IOWR('o', 52, struct dvb_net_if)
#define NET_REMOVE_IF _IO('o', 53)
#define NET_GET_IF    _IOWR('o', 54, struct dvb_net_if)


/* binary compatibility cruft: */
struct __dvb_net_if_old {
	__u16 pid;
	__u16 if_num;
};
#define __NET_ADD_IF_OLD _IOWR('o', 52, struct __dvb_net_if_old)
#define __NET_GET_IF_OLD _IOWR('o', 54, struct __dvb_net_if_old)


#endif /*_DVBNET_H_*/
