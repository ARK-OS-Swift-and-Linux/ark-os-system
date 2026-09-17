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

/* Copyright (C) 1996-2026 Free Software Foundation, Inc.
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

#ifndef _ALIASES_H
#define _ALIASES_H	1

#include <features.h>

#include <sys/types.h>


__BEGIN_DECLS

/* Structure to represent one entry of the alias database.  */
struct aliasent
  {
    char *alias_name;
    size_t alias_members_len;
    char **alias_members;
    int alias_local;
  };


/* Open alias data base files.  */
extern void setaliasent (void) __THROW;

/* Close alias database files.  */
extern void endaliasent (void) __THROW;

/* Get the next entry from the alias database.  */
extern struct aliasent *getaliasent (void) __THROW;

/* Get the next entry from the alias database and put it in RESULT_BUF.  */
extern int getaliasent_r (struct aliasent *__restrict __result_buf,
			  char *__restrict __buffer, size_t __buflen,
			  struct aliasent **__restrict __result) __THROW;

/* Get alias entry corresponding to NAME.  */
extern struct aliasent *getaliasbyname (const char *__name) __THROW;

/* Get alias entry corresponding to NAME and put it in RESULT_BUF.  */
extern int getaliasbyname_r (const char *__restrict __name,
			     struct aliasent *__restrict __result_buf,
			     char *__restrict __buffer, size_t __buflen,
			     struct aliasent **__restrict __result) __THROW;

__END_DECLS

#endif /* aliases.h */
