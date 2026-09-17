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
 *  FC Transport Netlink Interface
 *
 *  Copyright (C) 2006   James Smart, Emulex Corporation
 */
#ifndef SCSI_NETLINK_FC_H
#define SCSI_NETLINK_FC_H

#include <linux/types.h>
#include <scsi/scsi_netlink.h>

/*
 * This file intended to be included by both kernel and user space
 */

/*
 * FC Transport Message Types
 */
	/* kernel -> user */
#define FC_NL_ASYNC_EVENT			0x0100
	/* user -> kernel */
/* none */


/*
 * Message Structures :
 */

/* macro to round up message lengths to 8byte boundary */
#define FC_NL_MSGALIGN(len)		(((len) + 7) & ~7)


/*
 * FC Transport Broadcast Event Message :
 *   FC_NL_ASYNC_EVENT
 *
 * Note: if Vendor Unique message, event_data_flex will be start of
 * 	 vendor unique payload, and the length of the payload is
 *       per event_datalen
 *
 * Note: When specifying vendor_id, be sure to read the Vendor Type and ID
 *   formatting requirements specified in scsi_netlink.h
 */
struct fc_nl_event {
	struct scsi_nl_hdr snlh;		/* must be 1st element ! */
	__u64 seconds;
	__u64 vendor_id;
	__u16 host_no;
	__u16 event_datalen;
	__u32 event_num;
	__u32 event_code;
	union {
		__u32 event_data;
		__DECLARE_FLEX_ARRAY(__u8, event_data_flex);
	};
} __attribute__((aligned(sizeof(__u64))));


#endif /* SCSI_NETLINK_FC_H */

