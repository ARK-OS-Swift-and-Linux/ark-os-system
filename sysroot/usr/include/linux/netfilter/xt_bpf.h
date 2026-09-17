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
#ifndef _XT_BPF_H
#define _XT_BPF_H

#include <linux/filter.h>
#include <linux/limits.h>
#include <linux/types.h>

#define XT_BPF_MAX_NUM_INSTR	64
#define XT_BPF_PATH_MAX		(XT_BPF_MAX_NUM_INSTR * sizeof(struct sock_filter))

struct bpf_prog;

struct xt_bpf_info {
	__u16 bpf_program_num_elem;
	struct sock_filter bpf_program[XT_BPF_MAX_NUM_INSTR];

	/* only used in the kernel */
	struct bpf_prog *filter __attribute__((aligned(8)));
};

enum xt_bpf_modes {
	XT_BPF_MODE_BYTECODE,
	XT_BPF_MODE_FD_PINNED,
	XT_BPF_MODE_FD_ELF,
};
#define XT_BPF_MODE_PATH_PINNED XT_BPF_MODE_FD_PINNED

struct xt_bpf_info_v1 {
	__u16 mode;
	__u16 bpf_program_num_elem;
	__s32 fd;
	union {
		struct sock_filter bpf_program[XT_BPF_MAX_NUM_INSTR];
		char path[XT_BPF_PATH_MAX];
	};

	/* only used in the kernel */
	struct bpf_prog *filter __attribute__((aligned(8)));
};

#endif /*_XT_BPF_H */
