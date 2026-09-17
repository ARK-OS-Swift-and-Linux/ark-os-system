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

/* Copyright (C) 2005-2026 Free Software Foundation, Inc.

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
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef	_LINK_H
# error "Never include <bits/link.h> directly; use <link.h> instead."
#endif

typedef union
{
  float s;
  double d;
  long double q;
} La_aarch64_vector;

/* Registers for entry into PLT on AArch64.  */
typedef struct La_aarch64_regs
{
  uint64_t          lr_xreg[9];
  La_aarch64_vector lr_vreg[8];
  uint64_t          lr_sp;
  uint64_t          lr_lr;
  void              *lr_vpcs;
} La_aarch64_regs;

/* Return values for calls from PLT on AArch64.  */
typedef struct La_aarch64_retval
{
  /* Up to eight integer registers can be used for a return value.  */
  uint64_t          lrv_xreg[8];
  /* Up to eight V registers can be used for a return value.  */
  La_aarch64_vector lrv_vreg[8];
  void              *lrv_vpcs;
} La_aarch64_retval;
__BEGIN_DECLS

extern ElfW(Addr)
la_aarch64_gnu_pltenter (ElfW(Sym) *__sym, unsigned int __ndx,
			 uintptr_t *__refcook,
			 uintptr_t *__defcook,
			 La_aarch64_regs *__regs,
			 unsigned int *__flags,
			 const char *__symname,
			 long int *__framesizep);

extern unsigned int
la_aarch64_gnu_pltexit (ElfW(Sym) *__sym, unsigned int __ndx,
			uintptr_t *__refcook,
			uintptr_t *__defcook,
			const La_aarch64_regs *__inregs,
			La_aarch64_retval *__outregs,
			const char *__symname);

__END_DECLS
