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

/* Header with interface version macros for library pieces copied elsewhere.
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

#ifndef _GNU_VERSIONS_H
#define	_GNU_VERSIONS_H	1

/* This file exists to define these few macros.  Each specifies a version
   number associated with the library interface of a piece of the C library
   which is also distributed with other GNU packages.  These pieces are
   both part of the GNU C library and also distributed with other GNU
   packages so those packages may use their facilities on systems lacking
   the GNU C library.  The source files for each piece surround all their
   code with `#ifndef ELIDE_CODE' after defining it with this:

   #define OBSTACK_INTERFACE_VERSION 1
   #if !defined (_LIBC) && defined (__GNU_LIBRARY__) && __GNU_LIBRARY__ > 1
   #include <gnu-versions.h>
   #if _GNU_OBSTACK_INTERFACE_VERSION == OBSTACK_INTERFACE_VERSION
   #define ELIDE_CODE
   #endif
   #endif

   This allows those one to avoid compiling those files when part of a GNU
   package not libc, on a system using a GNU C library that supports the
   same interface.

   Please preserve the format of the comments after each macro.  And
   remember, if any of these versions change, the libc.so major version
   number must change too (so avoid it)!  */

#define _GNU_OBSTACK_INTERFACE_VERSION	1 /* vs malloc/obstack.c */
#define _GNU_REGEX_INTERFACE_VERSION	1 /* vs posix/regex.c */
#define _GNU_GLOB_INTERFACE_VERSION	2 /* vs posix/glob.c */
#define _GNU_GETOPT_INTERFACE_VERSION	2 /* vs posix/getopt.c and
					     posix/getopt1.c */

#endif	/* gnu-versions.h */
