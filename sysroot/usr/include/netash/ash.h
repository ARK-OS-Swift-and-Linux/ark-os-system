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

/* Definitions for use with Linux AF_ASH sockets.
   Copyright (C) 1998-2026 Free Software Foundation, Inc.
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

#ifndef _NETASH_ASH_H
#define _NETASH_ASH_H	1

#include <features.h>
#include <bits/sockaddr.h>

struct __attribute_struct_may_alias__ sockaddr_ash
  {
    __SOCKADDR_COMMON (sash_);		/* Common data: address family etc.  */
    int sash_ifindex;			/* Interface to use.  */
    unsigned char sash_channel;		/* Realtime or control.  */
    unsigned int sash_plen;
    unsigned char sash_prefix[16];
  };

/* Values for `channel' member.  */
#define ASH_CHANNEL_ANY		0
#define ASH_CHANNEL_CONTROL	1
#define ASH_CHANNEL_REALTIME	2

#endif	/* netash/ash.h */
