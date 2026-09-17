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

/* Old-style Unix parameters and limits.  Linux version.
   Copyright (C) 1995-2026 Free Software Foundation, Inc.
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

#ifndef _SYS_PARAM_H
# error "Never use <bits/param.h> directly; include <sys/param.h> instead."
#endif

#ifndef ARG_MAX
# define __undef_ARG_MAX
#endif

#include <linux/limits.h>
#include <linux/param.h>

/* The kernel headers define ARG_MAX.  The value is wrong, though.  */
#ifdef __undef_ARG_MAX
# undef ARG_MAX
# undef __undef_ARG_MAX
#endif

#define	MAXSYMLINKS	20

/* The following are not really correct but it is a value we used for a
   long time and which seems to be usable.  People should not use NOFILE
   and NCARGS anyway.  */
#define NOFILE		256
#define	NCARGS		131072
