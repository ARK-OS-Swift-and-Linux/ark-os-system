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

/* SPDX-License-Identifier: GPL-2.0+ WITH Linux-syscall-note */
/*
 *	mpls tunnel api
 *
 *	Authors:
 *		Roopa Prabhu <roopa@cumulusnetworks.com>
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 */

#ifndef _LINUX_MPLS_IPTUNNEL_H
#define _LINUX_MPLS_IPTUNNEL_H

/* MPLS tunnel attributes
 * [RTA_ENCAP] = {
 *     [MPLS_IPTUNNEL_DST]
 *     [MPLS_IPTUNNEL_TTL]
 * }
 */
enum {
	MPLS_IPTUNNEL_UNSPEC,
	MPLS_IPTUNNEL_DST,
	MPLS_IPTUNNEL_TTL,
	__MPLS_IPTUNNEL_MAX,
};
#define MPLS_IPTUNNEL_MAX (__MPLS_IPTUNNEL_MAX - 1)

#endif /* _LINUX_MPLS_IPTUNNEL_H */
