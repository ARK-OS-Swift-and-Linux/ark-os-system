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

/* struct ipc_perm definition.
   Copyright (C) 2019-2026 Free Software Foundation, Inc.
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
   <http://www.gnu.org/licenses/>.  */

#ifndef _SYS_IPC_H
# error "Never use <bits/ipc-perm.h> directly; include <sys/ipc.h> instead."
#endif

/* Data structure used to pass permission information to IPC operations.
   It follows the kernel ipc64_perm size so the syscall can be made directly
   without temporary buffer copy.  However, since glibc defines the MODE
   field as mode_t per POSIX definition (BZ#18231), it omits the __PAD1 field
   (since glibc does not export mode_t as 16-bit for any architecture).  */
struct ipc_perm
{
  __key_t __key;				/* Key.  */
  __uid_t uid;					/* Owner's user ID.  */
  __gid_t gid;					/* Owner's group ID.  */
  __uid_t cuid;					/* Creator's user ID.  */
  __gid_t cgid;					/* Creator's group ID.  */
  __mode_t mode;				/* Read/write permission.  */
  unsigned short int __seq;			/* Sequence number.  */
  unsigned short int __pad2;
  __syscall_ulong_t __glibc_reserved1;
  __syscall_ulong_t __glibc_reserved2;
};
