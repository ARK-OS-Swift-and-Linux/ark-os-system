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
#ifndef _ASM_X86_SWAB_H
#define _ASM_X86_SWAB_H

#include <linux/types.h>


static __inline__  __u32 __arch_swab32(__u32 val)
{
	__asm__("bswapl %0" : "=r" (val) : "0" (val));
	return val;
}
#define __arch_swab32 __arch_swab32

static __inline__  __u64 __arch_swab64(__u64 val)
{
#ifdef __i386__
	union {
		struct {
			__u32 a;
			__u32 b;
		} s;
		__u64 u;
	} v;
	v.u = val;
	__asm__("bswapl %0 ; bswapl %1 ; xchgl %0,%1"
	    : "=r" (v.s.a), "=r" (v.s.b)
	    : "0" (v.s.a), "1" (v.s.b));
	return v.u;
#else /* __i386__ */
	__asm__("bswapq %0" : "=r" (val) : "0" (val));
	return val;
#endif
}
#define __arch_swab64 __arch_swab64

#endif /* _ASM_X86_SWAB_H */
