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
/* IP tables module for matching the value of the TTL
 * (C) 2000 by Harald Welte <laforge@gnumonks.org> */

#ifndef _IPT_TTL_H
#define _IPT_TTL_H

#include <linux/types.h>

enum {
	IPT_TTL_EQ = 0,		/* equals */
	IPT_TTL_NE,		/* not equals */
	IPT_TTL_LT,		/* less than */
	IPT_TTL_GT,		/* greater than */
};


struct ipt_ttl_info {
	__u8	mode;
	__u8	ttl;
};


#endif
