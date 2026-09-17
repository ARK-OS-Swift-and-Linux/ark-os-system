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

#ifndef _NETROM_NETROM_H
#define _NETROM_NETROM_H	1

#include <netax25/ax25.h>

/* Setsockoptions(2) level.  Thanks to BSD these must match IPPROTO_xxx.  */
#define SOL_NETROM	259

/* NetRom control values: */
#define NETROM_T1	1
#define NETROM_T2	2
#define NETROM_N2	3
#define NETROM_PACLEN	5
#define	NETROM_T4	6
#define NETROM_IDLE	7

#define NETROM_KILL	99

/* Type of route: */
#define NETROM_NEIGH    0
#define NETROM_NODE     1

struct nr_route_struct
  {
    int type;
    ax25_address callsign;
    char device[16];
    unsigned int quality;
    char mnemonic[7];
    ax25_address neighbour;
    unsigned int obs_count;
    unsigned int ndigis;
    ax25_address digipeaters[AX25_MAX_DIGIS];
  };

/* NetRom socket ioctls: */
#define	SIOCNRGETPARMS		(SIOCPROTOPRIVATE+0)
#define	SIOCNRSETPARMS		(SIOCPROTOPRIVATE+1)
#define	SIOCNRDECOBS		(SIOCPROTOPRIVATE+2)
#define	SIOCNRRTCTL		(SIOCPROTOPRIVATE+3)
#define	SIOCNRCTLCON		(SIOCPROTOPRIVATE+4)

/* NetRom parameter structure: */
struct nr_parms_struct
  {
    unsigned int quality;
    unsigned int obs_count;
    unsigned int ttl;
    unsigned int timeout;
    unsigned int ack_delay;
    unsigned int busy_delay;
    unsigned int tries;
    unsigned int window;
    unsigned int paclen;
  };

/* NetRom control structure: */
struct nr_ctl_struct
  {
    unsigned char index;
    unsigned char id;
    unsigned int cmd;
    unsigned long arg;
  };

#endif /* netrom/netrom.h */
