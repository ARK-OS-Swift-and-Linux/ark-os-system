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
#ifndef __LINUX_TC_EM_TEXT_H
#define __LINUX_TC_EM_TEXT_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

#define TC_EM_TEXT_ALGOSIZ	16

struct tcf_em_text {
	char		algo[TC_EM_TEXT_ALGOSIZ];
	__u16		from_offset;
	__u16		to_offset;
	__u16		pattern_len;
	__u8		from_layer:4;
	__u8		to_layer:4;
	__u8		pad;
};

#endif
