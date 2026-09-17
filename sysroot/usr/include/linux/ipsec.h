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
#ifndef _LINUX_IPSEC_H
#define _LINUX_IPSEC_H

/* The definitions, required to talk to KAME racoon IKE. */

#include <linux/pfkeyv2.h>

#define IPSEC_PORT_ANY		0
#define IPSEC_ULPROTO_ANY	255
#define IPSEC_PROTO_ANY		255

enum {
	IPSEC_MODE_ANY		= 0,	/* We do not support this for SA */
	IPSEC_MODE_TRANSPORT	= 1,
	IPSEC_MODE_TUNNEL	= 2,
	IPSEC_MODE_BEET         = 3,
	IPSEC_MODE_IPTFS        = 4
};

enum {
	IPSEC_DIR_ANY		= 0,
	IPSEC_DIR_INBOUND	= 1,
	IPSEC_DIR_OUTBOUND	= 2,
	IPSEC_DIR_FWD		= 3,	/* It is our own */
	IPSEC_DIR_MAX		= 4,
	IPSEC_DIR_INVALID	= 5
};

enum {
	IPSEC_POLICY_DISCARD	= 0,
	IPSEC_POLICY_NONE	= 1,
	IPSEC_POLICY_IPSEC	= 2,
	IPSEC_POLICY_ENTRUST	= 3,
	IPSEC_POLICY_BYPASS	= 4
};

enum {
	IPSEC_LEVEL_DEFAULT	= 0,
	IPSEC_LEVEL_USE		= 1,
	IPSEC_LEVEL_REQUIRE	= 2,
	IPSEC_LEVEL_UNIQUE	= 3
};

#define IPSEC_MANUAL_REQID_MAX	0x3fff

#define IPSEC_REPLAYWSIZE  32

#endif	/* _LINUX_IPSEC_H */
