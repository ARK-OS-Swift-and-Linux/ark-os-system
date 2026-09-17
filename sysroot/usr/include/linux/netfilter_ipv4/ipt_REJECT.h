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
#ifndef _IPT_REJECT_H
#define _IPT_REJECT_H

enum ipt_reject_with {
	IPT_ICMP_NET_UNREACHABLE,
	IPT_ICMP_HOST_UNREACHABLE,
	IPT_ICMP_PROT_UNREACHABLE,
	IPT_ICMP_PORT_UNREACHABLE,
	IPT_ICMP_ECHOREPLY,
	IPT_ICMP_NET_PROHIBITED,
	IPT_ICMP_HOST_PROHIBITED,
	IPT_TCP_RESET,
	IPT_ICMP_ADMIN_PROHIBITED
};

struct ipt_reject_info {
	enum ipt_reject_with with;      /* reject type */
};

#endif /*_IPT_REJECT_H*/
