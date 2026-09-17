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

/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 *	Swansea University Computer Society	NET3
 *	
 *	This file declares the constants of special use with the SLIP/CSLIP/
 *	KISS TNC driver.
 */
 
#ifndef __LINUX_SLIP_H
#define __LINUX_SLIP_H

#define		SL_MODE_SLIP		0
#define		SL_MODE_CSLIP		1
#define 	SL_MODE_KISS		4

#define		SL_OPT_SIXBIT		2
#define		SL_OPT_ADAPTIVE		8

/*
 *	VSV = ioctl for keepalive & outfill in SLIP driver 
 */
 
#define SIOCSKEEPALIVE	(SIOCDEVPRIVATE)		/* Set keepalive timeout in sec */
#define SIOCGKEEPALIVE	(SIOCDEVPRIVATE+1)		/* Get keepalive timeout */
#define SIOCSOUTFILL	(SIOCDEVPRIVATE+2)		/* Set outfill timeout */
#define	SIOCGOUTFILL	(SIOCDEVPRIVATE+3)		/* Get outfill timeout */
#define SIOCSLEASE	(SIOCDEVPRIVATE+4)		/* Set "leased" line type */
#define	SIOCGLEASE	(SIOCDEVPRIVATE+5)		/* Get line type */


#endif
