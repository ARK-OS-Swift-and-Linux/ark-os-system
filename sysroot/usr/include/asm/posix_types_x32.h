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
#ifndef _ASM_X86_POSIX_TYPES_X32_H
#define _ASM_X86_POSIX_TYPES_X32_H

/*
 * This file is only used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 *
 * These types should generally match the ones used by the 64-bit kernel,
 *
 */

typedef long long __kernel_long_t;
typedef unsigned long long __kernel_ulong_t;
#define __kernel_long_t __kernel_long_t

#include <asm/posix_types_64.h>

#endif /* _ASM_X86_POSIX_TYPES_X32_H */
