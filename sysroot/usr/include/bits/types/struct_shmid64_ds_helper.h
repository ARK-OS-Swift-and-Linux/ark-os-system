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

/* Common definitions for struct semid_ds with 64-bit time.
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

  struct ipc_perm shm_perm;	/* operation permission struct */
  size_t shm_segsz;		/* size of segment in bytes */
  __time64_t shm_atime;		/* time of last shmat() */
  __time64_t shm_dtime;		/* time of last shmdt() */
  __time64_t shm_ctime;		/* time of last change by shmctl() */
  __pid_t shm_cpid;		/* pid of creator */
  __pid_t shm_lpid;		/* pid of last shmop */
  shmatt_t shm_nattch;		/* number of current attaches */
  unsigned long int __glibc_reserved5;
  unsigned long int __glibc_reserved6;
