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

/* Copyright (C) 2010-2026 Free Software Foundation, Inc.
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

#ifndef	_SYS_FANOTIFY_H
#define	_SYS_FANOTIFY_H	1

#include <stdint.h>
#include <linux/fanotify.h>


__BEGIN_DECLS

/* Create and initialize fanotify group.  */
extern int fanotify_init (unsigned int __flags, unsigned int __event_f_flags)
  __THROW;

/* Add, remove, or modify an fanotify mark on a filesystem object.  */
extern int fanotify_mark (int __fanotify_fd, unsigned int __flags,
			  uint64_t __mask, int __dfd, const char *__pathname)
     __THROW;

__END_DECLS

#endif /* sys/fanotify.h */
