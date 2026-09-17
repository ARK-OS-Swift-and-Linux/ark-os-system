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
#ifndef _NF_CONNTRACK_TCP_H
#define _NF_CONNTRACK_TCP_H
/* TCP tracking. */

#include <linux/types.h>

/* This is exposed to userspace (ctnetlink) */
enum tcp_conntrack {
	TCP_CONNTRACK_NONE,
	TCP_CONNTRACK_SYN_SENT,
	TCP_CONNTRACK_SYN_RECV,
	TCP_CONNTRACK_ESTABLISHED,
	TCP_CONNTRACK_FIN_WAIT,
	TCP_CONNTRACK_CLOSE_WAIT,
	TCP_CONNTRACK_LAST_ACK,
	TCP_CONNTRACK_TIME_WAIT,
	TCP_CONNTRACK_CLOSE,
	TCP_CONNTRACK_LISTEN,	/* obsolete */
#define TCP_CONNTRACK_SYN_SENT2	TCP_CONNTRACK_LISTEN
	TCP_CONNTRACK_MAX,
	TCP_CONNTRACK_IGNORE,
	TCP_CONNTRACK_RETRANS,
	TCP_CONNTRACK_UNACK,
	TCP_CONNTRACK_TIMEOUT_MAX
};

/* Window scaling is advertised by the sender */
#define IP_CT_TCP_FLAG_WINDOW_SCALE		0x01

/* SACK is permitted by the sender */
#define IP_CT_TCP_FLAG_SACK_PERM		0x02

/* This sender sent FIN first */
#define IP_CT_TCP_FLAG_CLOSE_INIT		0x04

/* Be liberal in window checking */
#define IP_CT_TCP_FLAG_BE_LIBERAL		0x08

/* Has unacknowledged data */
#define IP_CT_TCP_FLAG_DATA_UNACKNOWLEDGED	0x10

/* The field td_maxack has been set */
#define IP_CT_TCP_FLAG_MAXACK_SET		0x20

/* Marks possibility for expected RFC5961 challenge ACK */
#define IP_CT_EXP_CHALLENGE_ACK 		0x40

/* Simultaneous open initialized */
#define IP_CT_TCP_SIMULTANEOUS_OPEN		0x80

struct nf_ct_tcp_flags {
	__u8 flags;
	__u8 mask;
};


#endif /* _NF_CONNTRACK_TCP_H */
