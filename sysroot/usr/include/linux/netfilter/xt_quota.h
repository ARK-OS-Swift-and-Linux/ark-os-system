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
#ifndef _XT_QUOTA_H
#define _XT_QUOTA_H

#include <linux/types.h>

enum xt_quota_flags {
	XT_QUOTA_INVERT		= 0x1,
};
#define XT_QUOTA_MASK		0x1

struct xt_quota_priv;

struct xt_quota_info {
	__u32 flags;
	__u32 pad;
	__aligned_u64 quota;

	/* Used internally by the kernel */
	struct xt_quota_priv	*master;
};

#endif /* _XT_QUOTA_H */
