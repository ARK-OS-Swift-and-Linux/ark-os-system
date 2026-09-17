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
#ifndef __ASM_GENERIC_POSIX_TYPES_H
#define __ASM_GENERIC_POSIX_TYPES_H

#include <asm/bitsperlong.h>
/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.
 *
 * First the types that are often defined in different ways across
 * architectures, so that you can override them.
 */

#ifndef __kernel_long_t
typedef long		__kernel_long_t;
typedef unsigned long	__kernel_ulong_t;
#endif

#ifndef __kernel_ino_t
typedef __kernel_ulong_t __kernel_ino_t;
#endif

#ifndef __kernel_mode_t
typedef unsigned int	__kernel_mode_t;
#endif

#ifndef __kernel_pid_t
typedef int		__kernel_pid_t;
#endif

#ifndef __kernel_ipc_pid_t
typedef int		__kernel_ipc_pid_t;
#endif

#ifndef __kernel_uid_t
typedef unsigned int	__kernel_uid_t;
typedef unsigned int	__kernel_gid_t;
#endif

#ifndef __kernel_suseconds_t
typedef __kernel_long_t		__kernel_suseconds_t;
#endif

#ifndef __kernel_daddr_t
typedef int		__kernel_daddr_t;
#endif

#ifndef __kernel_uid32_t
typedef unsigned int	__kernel_uid32_t;
typedef unsigned int	__kernel_gid32_t;
#endif

#ifndef __kernel_old_uid_t
typedef __kernel_uid_t	__kernel_old_uid_t;
typedef __kernel_gid_t	__kernel_old_gid_t;
#endif

#ifndef __kernel_old_dev_t
typedef unsigned int	__kernel_old_dev_t;
#endif

/*
 * Most 32 bit architectures use "unsigned int" size_t,
 * and all 64 bit architectures use "unsigned long" size_t.
 */
#ifndef __kernel_size_t
#if __BITS_PER_LONG != 64
typedef unsigned int	__kernel_size_t;
typedef int		__kernel_ssize_t;
typedef int		__kernel_ptrdiff_t;
#else
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t	__kernel_ssize_t;
typedef __kernel_long_t	__kernel_ptrdiff_t;
#endif
#endif

#ifndef __kernel_fsid_t
typedef struct {
	int	val[2];
} __kernel_fsid_t;
#endif

/*
 * anything below here should be completely generic
 */
typedef __kernel_long_t	__kernel_off_t;
typedef long long	__kernel_loff_t;
typedef unsigned long long	__kernel_uoff_t;
typedef __kernel_long_t	__kernel_old_time_t;
typedef __kernel_long_t	__kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t	__kernel_clock_t;
typedef int		__kernel_timer_t;
typedef int		__kernel_clockid_t;
typedef char *		__kernel_caddr_t;
typedef unsigned short	__kernel_uid16_t;
typedef unsigned short	__kernel_gid16_t;

#endif /* __ASM_GENERIC_POSIX_TYPES_H */
