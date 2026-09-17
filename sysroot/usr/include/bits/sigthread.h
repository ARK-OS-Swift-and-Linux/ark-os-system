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

/* Signal handling function for threaded programs.
   Copyright (C) 1998-2026 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If
   not, see <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_SIGTHREAD_H
#define _BITS_SIGTHREAD_H	1

#if !defined _SIGNAL_H && !defined _PTHREAD_H
# error "Never include this file directly.  Use <signal.h> instead"
#endif

/* Functions for handling signals. */
#include <bits/types/__sigset_t.h>

/* Modify the signal mask for the calling thread.  The arguments have
   the same meaning as for sigprocmask(2). */
extern int pthread_sigmask (int __how,
			    const __sigset_t *__restrict __newmask,
			    __sigset_t *__restrict __oldmask)__THROW;

/* Send signal SIGNO to the given thread. */
extern int pthread_kill (pthread_t __threadid, int __signo) __THROW;

#ifdef __USE_GNU
/* Queue signal and data to a thread.  */
extern int pthread_sigqueue (pthread_t __threadid, int __signo,
			     const union sigval __value) __THROW;
#endif

#endif	/* bits/sigthread.h */
