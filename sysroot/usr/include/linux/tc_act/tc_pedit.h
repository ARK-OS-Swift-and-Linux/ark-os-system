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
#ifndef __LINUX_TC_PED_H
#define __LINUX_TC_PED_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

enum {
	TCA_PEDIT_UNSPEC,
	TCA_PEDIT_TM,
	TCA_PEDIT_PARMS,
	TCA_PEDIT_PAD,
	TCA_PEDIT_PARMS_EX,
	TCA_PEDIT_KEYS_EX,
	TCA_PEDIT_KEY_EX,
	__TCA_PEDIT_MAX
};

#define TCA_PEDIT_MAX (__TCA_PEDIT_MAX - 1)

enum {
	TCA_PEDIT_KEY_EX_HTYPE = 1,
	TCA_PEDIT_KEY_EX_CMD = 2,
	__TCA_PEDIT_KEY_EX_MAX
};

#define TCA_PEDIT_KEY_EX_MAX (__TCA_PEDIT_KEY_EX_MAX - 1)

 /* TCA_PEDIT_KEY_EX_HDR_TYPE_NETWROK is a special case for legacy users. It
  * means no specific header type - offset is relative to the network layer
  */
enum pedit_header_type {
	TCA_PEDIT_KEY_EX_HDR_TYPE_NETWORK = 0,
	TCA_PEDIT_KEY_EX_HDR_TYPE_ETH = 1,
	TCA_PEDIT_KEY_EX_HDR_TYPE_IP4 = 2,
	TCA_PEDIT_KEY_EX_HDR_TYPE_IP6 = 3,
	TCA_PEDIT_KEY_EX_HDR_TYPE_TCP = 4,
	TCA_PEDIT_KEY_EX_HDR_TYPE_UDP = 5,
	__PEDIT_HDR_TYPE_MAX,
};

#define TCA_PEDIT_HDR_TYPE_MAX (__PEDIT_HDR_TYPE_MAX - 1)

enum pedit_cmd {
	TCA_PEDIT_KEY_EX_CMD_SET = 0,
	TCA_PEDIT_KEY_EX_CMD_ADD = 1,
	__PEDIT_CMD_MAX,
};

#define TCA_PEDIT_CMD_MAX (__PEDIT_CMD_MAX - 1)

struct tc_pedit_key {
	__u32           mask;  /* AND */
	__u32           val;   /*XOR */
	__u32           off;  /*offset */
	__u32           at;
	__u32           offmask;
	__u32           shift;
};

struct tc_pedit_sel {
	tc_gen;
	unsigned char           nkeys;
	unsigned char           flags;
	struct tc_pedit_key     keys[] __counted_by(nkeys);
};

#define tc_pedit tc_pedit_sel

#endif
