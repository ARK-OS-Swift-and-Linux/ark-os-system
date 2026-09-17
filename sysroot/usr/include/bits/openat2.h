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

/* openat2 definition.  Linux specific.
   Copyright (C) 2025-2026 Free Software Foundation, Inc.
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

#ifndef _FCNTL_H
# error "Never use <bits/openat2.h> directly; include <fcntl.h> instead."
#endif

#ifndef __glibc_has_open_how
/* Arguments for how openat2 should open the target path.  */
struct open_how
{
  __uint64_t flags;
  __uint64_t mode;
  __uint64_t resolve;
};
#endif

/* how->resolve flags for openat2. */
#ifndef RESOLVE_NO_XDEV
# define RESOLVE_NO_XDEV	0x01 /* Block mount-point crossings
					(includes bind-mounts).  */
#endif
#ifndef RESOLVE_NO_MAGICLINKS
# define RESOLVE_NO_MAGICLINKS	0x02 /* Block traversal through procfs-style
					"magic-links".  */
#endif
#ifndef RESOLVE_NO_SYMLINKS
# define RESOLVE_NO_SYMLINKS	0x04 /* Block traversal through all symlinks.  */
#endif
#ifndef RESOLVE_BENEATH
# define RESOLVE_BENEATH	0x08 /* Block "lexical" trickery like
					"..", symlinks, and absolute
					paths which escape the dirfd.  */
#endif
#ifndef RESOLVE_IN_ROOT
# define RESOLVE_IN_ROOT	0x10 /* Make all jumps to "/" and ".."
					be scoped inside the dirfd
					(similar to chroot).  */
#endif
#ifndef RESOLVE_CACHED
# define RESOLVE_CACHED		0x20 /* Only complete if resolution can be
					completed through cached lookup. May
					return -EAGAIN if that's not
					possible.  */
#endif
