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
#ifndef __ASM_GENERIC_BITS_PER_LONG
#define __ASM_GENERIC_BITS_PER_LONG

#ifndef __BITS_PER_LONG
/*
 * In order to keep safe and avoid regression, only unify uapi
 * bitsperlong.h for some archs which are using newer toolchains
 * that have the definitions of __CHAR_BIT__ and __SIZEOF_LONG__.
 * See the following link for more info:
 * https://lore.kernel.org/linux-arch/b9624545-2c80-49a1-ac3c-39264a591f7b@app.fastmail.com/
 */
#if defined(__CHAR_BIT__) && defined(__SIZEOF_LONG__)
#define __BITS_PER_LONG (__CHAR_BIT__ * __SIZEOF_LONG__)
#else
/*
 * There seems to be no way of detecting this automatically from user
 * space, so 64 bit architectures should override this in their
 * bitsperlong.h. In particular, an architecture that supports
 * both 32 and 64 bit user space must not rely on CONFIG_64BIT
 * to decide it, but rather check a compiler provided macro.
 */
#define __BITS_PER_LONG 32
#endif
#endif

#ifndef __BITS_PER_LONG_LONG
#define __BITS_PER_LONG_LONG 64
#endif

#endif /* __ASM_GENERIC_BITS_PER_LONG */
