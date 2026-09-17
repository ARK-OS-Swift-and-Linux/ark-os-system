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
#ifndef __LINUX_TC_NAT_H
#define __LINUX_TC_NAT_H

#include <linux/pkt_cls.h>
#include <linux/types.h>

enum {
	TCA_NAT_UNSPEC,
	TCA_NAT_PARMS,
	TCA_NAT_TM,
	TCA_NAT_PAD,
	__TCA_NAT_MAX
};
#define TCA_NAT_MAX (__TCA_NAT_MAX - 1)

#define TCA_NAT_FLAG_EGRESS 1

struct tc_nat {
	tc_gen;
	__be32 old_addr;
	__be32 new_addr;
	__be32 mask;
	__u32 flags;
};

#endif
