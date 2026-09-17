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
#ifndef __LINUX_TC_CSUM_H
#define __LINUX_TC_CSUM_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

enum {
	TCA_CSUM_UNSPEC,
	TCA_CSUM_PARMS,
	TCA_CSUM_TM,
	TCA_CSUM_PAD,
	__TCA_CSUM_MAX
};
#define TCA_CSUM_MAX (__TCA_CSUM_MAX - 1)

enum {
	TCA_CSUM_UPDATE_FLAG_IPV4HDR = 1,
	TCA_CSUM_UPDATE_FLAG_ICMP    = 2,
	TCA_CSUM_UPDATE_FLAG_IGMP    = 4,
	TCA_CSUM_UPDATE_FLAG_TCP     = 8,
	TCA_CSUM_UPDATE_FLAG_UDP     = 16,
	TCA_CSUM_UPDATE_FLAG_UDPLITE = 32,
	TCA_CSUM_UPDATE_FLAG_SCTP    = 64,
};

struct tc_csum {
	tc_gen;

	__u32 update_flags;
};

#endif /* __LINUX_TC_CSUM_H */
