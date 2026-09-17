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

/* Copyright (C) 1991-2026 Free Software Foundation, Inc.
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

#ifndef	_SYS_UN_H
#define	_SYS_UN_H	1

#include <sys/cdefs.h>

/* Get the definition of the macro to define the common sockaddr members.  */
#include <bits/sockaddr.h>

__BEGIN_DECLS

/* Structure describing the address of an AF_LOCAL (aka AF_UNIX) socket.  */
struct __attribute_struct_may_alias__ sockaddr_un
  {
    __SOCKADDR_COMMON (sun_);
    char sun_path[108];		/* Path name.  */
  };


#ifdef __USE_MISC
# include <stddef.h>
# include <string.h>		/* For prototype of `strlen'.  */

/* Evaluate to actual length of the `sockaddr_un' structure.  */
# define SUN_LEN(ptr) (offsetof (struct sockaddr_un, sun_path)		      \
		      + strlen ((ptr)->sun_path))
#endif

__END_DECLS

#endif	/* sys/un.h  */
