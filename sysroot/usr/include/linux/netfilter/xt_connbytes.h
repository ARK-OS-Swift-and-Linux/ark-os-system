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
#ifndef _XT_CONNBYTES_H
#define _XT_CONNBYTES_H

#include <linux/types.h>

enum xt_connbytes_what {
	XT_CONNBYTES_PKTS,
	XT_CONNBYTES_BYTES,
	XT_CONNBYTES_AVGPKT,
};

enum xt_connbytes_direction {
	XT_CONNBYTES_DIR_ORIGINAL,
	XT_CONNBYTES_DIR_REPLY,
	XT_CONNBYTES_DIR_BOTH,
};

struct xt_connbytes_info {
	struct {
		__aligned_u64 from;	/* count to be matched */
		__aligned_u64 to;	/* count to be matched */
	} count;
	__u8 what;		/* ipt_connbytes_what */
	__u8 direction;	/* ipt_connbytes_direction */
};
#endif
