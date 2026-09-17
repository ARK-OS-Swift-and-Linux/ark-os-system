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

/* Copyright (C) 2002-2026 Free Software Foundation, Inc.

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

#ifndef _BITS_PTHREADTYPES_ARCH_H
#define _BITS_PTHREADTYPES_ARCH_H	1

#include <bits/endian.h>

#define __SIZEOF_PTHREAD_ATTR_T		64
#define __SIZEOF_PTHREAD_MUTEX_T	48
#define __SIZEOF_PTHREAD_MUTEXATTR_T	8
#define __SIZEOF_PTHREAD_CONDATTR_T	8
#define __SIZEOF_PTHREAD_RWLOCK_T	56
#define __SIZEOF_PTHREAD_BARRIER_T	32
#define __SIZEOF_PTHREAD_BARRIERATTR_T  8
#define __SIZEOF_PTHREAD_COND_T         48
#define __SIZEOF_PTHREAD_RWLOCKATTR_T	8

#define __LOCK_ALIGNMENT
#define __ONCE_ALIGNMENT

#endif	/* bits/pthreadtypes.h */
