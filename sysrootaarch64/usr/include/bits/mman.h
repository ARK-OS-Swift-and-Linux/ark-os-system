/*
 * Copyright 2026 Aarav Ravindra Kharade
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Definitions for POSIX memory map interface.  Linux/AArch64 version.
   Copyright (C) 2020-2026 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _SYS_MMAN_H
# error "Never use <bits/mman.h> directly; include <sys/mman.h> instead."
#endif

/* AArch64 specific definitions, should be in sync with
   arch/arm64/include/uapi/asm/mman.h.  */

#define PROT_BTI	0x10
#define PROT_MTE	0x20

#ifdef __USE_GNU
# define PKEY_UNRESTRICTED 0x0
# define PKEY_DISABLE_ACCESS 0x1
# define PKEY_DISABLE_WRITE 0x2
# define PKEY_DISABLE_EXECUTE 0x4
# define PKEY_DISABLE_READ 0x8
#endif

#include <bits/mman-map-flags-generic.h>

/* Include generic Linux declarations.  */
#include <bits/mman-linux.h>
