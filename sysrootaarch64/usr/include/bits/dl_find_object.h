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

/* System dependent definitions for finding objects by address.
   Copyright (C) 2021-2026 Free Software Foundation, Inc.
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

#ifndef _DLFCN_H
# error "Never use <bits/dl_find_object.h> directly; include <dlfcn.h> instead."
#endif

/* This implementation does not have a dlfo_eh_dbase member in struct
   dl_find_object.  */
#define DLFO_STRUCT_HAS_EH_DBASE 0

/* This implementation does not have a dlfo_eh_count member in struct
   dl_find_object.  */
#define DLFO_STRUCT_HAS_EH_COUNT 0

/* The ELF segment which contains the exception handling data.  */
#define DLFO_EH_SEGMENT_TYPE PT_GNU_EH_FRAME
