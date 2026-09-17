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
/* AF_TIPC sock_diag interface for querying open sockets */

#ifndef __TIPC_SOCKETS_DIAG_H__
#define __TIPC_SOCKETS_DIAG_H__

#include <linux/types.h>
#include <linux/sock_diag.h>

/* Request */
struct tipc_sock_diag_req {
	__u8	sdiag_family;	/* must be AF_TIPC */
	__u8	sdiag_protocol;	/* must be 0 */
	__u16	pad;		/* must be 0 */
	__u32	tidiag_states;	/* query*/
};
#endif /* __TIPC_SOCKETS_DIAG_H__ */
