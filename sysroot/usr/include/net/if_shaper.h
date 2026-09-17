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

/* Copyright (C) 1998-2026 Free Software Foundation, Inc.
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

#ifndef _NET_IF_SHAPER_H
#define _NET_IF_SHAPER_H 1

#include <sys/types.h>
#include <stdint.h>
#include <net/if.h>
#include <sys/ioctl.h>

__BEGIN_DECLS

#define SHAPER_QLEN	10
/*
 *	This is a bit speed dependent (read it shouldn't be a constant!)
 *
 *	5 is about right for 28.8 upwards. Below that double for every
 *	halving of speed or so. - ie about 20 for 9600 baud.
 */
#define SHAPER_LATENCY	(5 * HZ)
#define SHAPER_MAXSLIP	2
#define SHAPER_BURST	(HZ / 50)	/* Good for >128K then */

#define SHAPER_SET_DEV		0x0001
#define SHAPER_SET_SPEED	0x0002
#define SHAPER_GET_DEV		0x0003
#define SHAPER_GET_SPEED	0x0004

struct shaperconf
{
  uint16_t ss_cmd;
  union
  {
    char ssu_name[14];
    uint32_t ssu_speed;
  } ss_u;
#define ss_speed ss_u.ssu_speed
#define ss_name ss_u.ssu_name
};

__END_DECLS

#endif /* net/if_shaper.h */
