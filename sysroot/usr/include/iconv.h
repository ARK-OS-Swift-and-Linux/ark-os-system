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

/* Copyright (C) 1997-2026 Free Software Foundation, Inc.
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

#ifndef _ICONV_H
#define _ICONV_H	1

#include <features.h>
#define __need_size_t
#include <stddef.h>


__BEGIN_DECLS

/* Identifier for conversion method from one codeset to another.  */
typedef void *iconv_t;


/* Free resources allocated for descriptor CD for code conversion.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int iconv_close (iconv_t __cd);

/* Allocate descriptor for code conversion from codeset FROMCODE to
   codeset TOCODE.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern iconv_t iconv_open (const char *__tocode, const char *__fromcode)
	__attribute_malloc__ __attr_dealloc (iconv_close, 1);

/* Convert at most *INBYTESLEFT bytes from *INBUF according to the
   code conversion algorithm specified by CD and place up to
   *OUTBYTESLEFT bytes in buffer at *OUTBUF.  */
extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
		     size_t *__restrict __inbytesleft,
		     char **__restrict __outbuf,
		     size_t *__restrict __outbytesleft);

__END_DECLS

#endif /* iconv.h */
