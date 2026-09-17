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
#ifndef _VMCORE_H
#define _VMCORE_H

#include <linux/types.h>

#define VMCOREDD_NOTE_NAME "LINUX"
#define VMCOREDD_MAX_NAME_BYTES 44

struct vmcoredd_header {
	__u32 n_namesz; /* Name size */
	__u32 n_descsz; /* Content size */
	__u32 n_type;   /* NT_VMCOREDD */
	__u8 name[8];   /* LINUX\0\0\0 */
	__u8 dump_name[VMCOREDD_MAX_NAME_BYTES]; /* Device dump's name */
};

enum hwerr_error_type {
	HWERR_RECOV_CPU,
	HWERR_RECOV_MEMORY,
	HWERR_RECOV_PCI,
	HWERR_RECOV_CXL,
	HWERR_RECOV_OTHERS,
	HWERR_RECOV_MAX,
};

#endif /* _VMCORE_H */
