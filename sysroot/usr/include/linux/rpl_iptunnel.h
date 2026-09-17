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
 *  IPv6 RPL-SR implementation
 *
 *  Author:
 *  (C) 2020 Alexander Aring <alex.aring@gmail.com>
 */

#ifndef _LINUX_RPL_IPTUNNEL_H
#define _LINUX_RPL_IPTUNNEL_H

enum {
	RPL_IPTUNNEL_UNSPEC,
	RPL_IPTUNNEL_SRH,
	__RPL_IPTUNNEL_MAX,
};
#define RPL_IPTUNNEL_MAX (__RPL_IPTUNNEL_MAX - 1)

#define RPL_IPTUNNEL_SRH_SIZE(srh) (((srh)->hdrlen + 1) << 3)

#endif
