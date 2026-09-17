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
#ifndef __ASM_X64_MSGBUF_H
#define __ASM_X64_MSGBUF_H

#if !defined(__x86_64__) || !defined(__ILP32__)
#include <asm-generic/msgbuf.h>
#else

#include <asm/ipcbuf.h>

/*
 * The msqid64_ds structure for x86 architecture with x32 ABI.
 *
 * On x86-32 and x86-64 we can just use the generic definition, but
 * x32 uses the same binary layout as x86_64, which is different
 * from other 32-bit architectures.
 */

struct msqid64_ds {
	struct ipc64_perm msg_perm;
	__kernel_long_t msg_stime;	/* last msgsnd time */
	__kernel_long_t msg_rtime;	/* last msgrcv time */
	__kernel_long_t msg_ctime;	/* last change time */
	__kernel_ulong_t msg_cbytes;	/* current number of bytes on queue */
	__kernel_ulong_t msg_qnum;	/* number of messages in queue */
	__kernel_ulong_t msg_qbytes;	/* max number of bytes on queue */
	__kernel_pid_t msg_lspid;	/* pid of last msgsnd */
	__kernel_pid_t msg_lrpid;	/* last receive pid */
	__kernel_ulong_t __unused4;
	__kernel_ulong_t __unused5;
};

#endif

#endif /* __ASM_GENERIC_MSGBUF_H */
