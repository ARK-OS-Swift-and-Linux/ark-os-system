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
#ifndef __LINUX_TC_SAMPLE_H
#define __LINUX_TC_SAMPLE_H

#include <linux/types.h>
#include <linux/pkt_cls.h>
#include <linux/if_ether.h>

struct tc_sample {
	tc_gen;
};

enum {
	TCA_SAMPLE_UNSPEC,
	TCA_SAMPLE_TM,
	TCA_SAMPLE_PARMS,
	TCA_SAMPLE_RATE,
	TCA_SAMPLE_TRUNC_SIZE,
	TCA_SAMPLE_PSAMPLE_GROUP,
	TCA_SAMPLE_PAD,
	__TCA_SAMPLE_MAX
};
#define TCA_SAMPLE_MAX (__TCA_SAMPLE_MAX - 1)

#endif
