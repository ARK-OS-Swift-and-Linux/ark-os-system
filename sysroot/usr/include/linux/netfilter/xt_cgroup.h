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
#ifndef _XT_CGROUP_H
#define _XT_CGROUP_H

#include <linux/types.h>
#include <linux/limits.h>

struct xt_cgroup_info_v0 {
	__u32 id;
	__u32 invert;
};

struct xt_cgroup_info_v1 {
	__u8		has_path;
	__u8		has_classid;
	__u8		invert_path;
	__u8		invert_classid;
	char		path[PATH_MAX];
	__u32		classid;

	/* kernel internal data */
	void		*priv __attribute__((aligned(8)));
};

#define XT_CGROUP_PATH_MAX	512

struct xt_cgroup_info_v2 {
	__u8		has_path;
	__u8		has_classid;
	__u8		invert_path;
	__u8		invert_classid;
	union {
		char	path[XT_CGROUP_PATH_MAX];
		__u32	classid;
	};

	/* kernel internal data */
	void		*priv __attribute__((aligned(8)));
};

#endif /* _XT_CGROUP_H */
