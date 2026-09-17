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

/* Definition of __INDIRECT_RETURN.  AArch64 version.
   Copyright (C) 2024-2026 Free Software Foundation, Inc.
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

#ifndef _UCONTEXT_H
# error "Never include <bits/indirect-return.h> directly; use <ucontext.h> instead."
#endif

/* __INDIRECT_RETURN indicates that swapcontext may return via
   an indirect branch.  This happens when GCS is enabled, so
   add the attribute if available, otherwise returns_twice has
   a similar effect, but it prevents some code transformations
   that can cause build failures in some rare cases so it is
   only used when GCS is enabled.  */
#if __glibc_has_attribute (__indirect_return__)
# define __INDIRECT_RETURN __attribute__ ((__indirect_return__))
#elif __glibc_has_attribute (__returns_twice__) \
      && defined __ARM_FEATURE_GCS_DEFAULT
# define __INDIRECT_RETURN __attribute__ ((__returns_twice__))
#else
# define __INDIRECT_RETURN
#endif
