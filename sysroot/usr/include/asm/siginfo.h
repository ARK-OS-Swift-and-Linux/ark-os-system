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
#ifndef _ASM_X86_SIGINFO_H
#define _ASM_X86_SIGINFO_H

#ifdef __x86_64__
# ifdef __ILP32__ /* x32 */
typedef long long __kernel_si_clock_t __attribute__((aligned(4)));
#  define __ARCH_SI_CLOCK_T		__kernel_si_clock_t
#  define __ARCH_SI_ATTRIBUTES		__attribute__((aligned(8)))
# endif
#endif

#include <asm-generic/siginfo.h>

#endif /* _ASM_X86_SIGINFO_H */
