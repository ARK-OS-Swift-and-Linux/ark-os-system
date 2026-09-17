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

/* Restartable Sequences Linux x86 architecture header.
   Copyright (C) 2021-2026 Free Software Foundation, Inc.

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

#ifndef _SYS_RSEQ_H
# error "Never use <bits/rseq.h> directly; include <sys/rseq.h> instead."
#endif

/* RSEQ_SIG is a signature required before each abort handler code.

   RSEQ_SIG is used with the following reserved undefined instructions, which
   trap in user-space:

   x86-32:    0f b9 3d 53 30 05 53      ud1    0x53053053,%edi
   x86-64:    0f b9 3d 53 30 05 53      ud1    0x53053053(%rip),%edi  */

#define RSEQ_SIG        0x53053053
