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

/* Interfaces for obtaining random bytes.
   Copyright (C) 2016-2026 Free Software Foundation, Inc.
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

#ifndef _SYS_RANDOM_H
#define _SYS_RANDOM_H 1

#include <features.h>
#include <sys/types.h>

/* Flags for use with getrandom.  */
#define GRND_NONBLOCK 0x01
#define GRND_RANDOM 0x02
#define GRND_INSECURE 0x04

__BEGIN_DECLS

/* Write LENGTH bytes of randomness starting at BUFFER.  Return the
   number of bytes written, or -1 on error.  */
ssize_t getrandom (void *__buffer, size_t __length,
                   unsigned int __flags) __wur
                   __attr_access ((__write_only__, 1, 2));

/* Write LENGTH bytes of randomness starting at BUFFER.  Return 0 on
   success or -1 on error.  */
int getentropy (void *__buffer, size_t __length) __wur
                __attr_access ((__write_only__, 1, 2));

__END_DECLS

#endif /* _SYS_RANDOM_H */
