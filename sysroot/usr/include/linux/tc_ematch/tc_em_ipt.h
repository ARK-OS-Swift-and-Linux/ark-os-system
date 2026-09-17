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
#ifndef __LINUX_TC_EM_IPT_H
#define __LINUX_TC_EM_IPT_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

enum {
	TCA_EM_IPT_UNSPEC,
	TCA_EM_IPT_HOOK,
	TCA_EM_IPT_MATCH_NAME,
	TCA_EM_IPT_MATCH_REVISION,
	TCA_EM_IPT_NFPROTO,
	TCA_EM_IPT_MATCH_DATA,
	__TCA_EM_IPT_MAX
};

#define TCA_EM_IPT_MAX (__TCA_EM_IPT_MAX - 1)

#endif
