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
#ifndef __UAPI_TC_IFE_H
#define __UAPI_TC_IFE_H

#include <linux/types.h>
#include <linux/pkt_cls.h>
#include <linux/ife.h>

/* Flag bits for now just encoding/decoding; mutually exclusive */
#define IFE_ENCODE 1
#define IFE_DECODE 0

struct tc_ife {
	tc_gen;
	__u16 flags;
};

/*XXX: We need to encode the total number of bytes consumed */
enum {
	TCA_IFE_UNSPEC,
	TCA_IFE_PARMS,
	TCA_IFE_TM,
	TCA_IFE_DMAC,
	TCA_IFE_SMAC,
	TCA_IFE_TYPE,
	TCA_IFE_METALST,
	TCA_IFE_PAD,
	__TCA_IFE_MAX
};
#define TCA_IFE_MAX (__TCA_IFE_MAX - 1)

#endif
