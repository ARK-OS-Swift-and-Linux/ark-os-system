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
#ifndef _NETFILTER_NF_LOG_H
#define _NETFILTER_NF_LOG_H

#define NF_LOG_TCPSEQ		0x01	/* Log TCP sequence numbers */
#define NF_LOG_TCPOPT		0x02	/* Log TCP options */
#define NF_LOG_IPOPT		0x04	/* Log IP options */
#define NF_LOG_UID		0x08	/* Log UID owning local socket */
#define NF_LOG_NFLOG		0x10	/* Unsupported, don't reuse */
#define NF_LOG_MACDECODE	0x20	/* Decode MAC header */
#define NF_LOG_MASK		0x2f

#define NF_LOG_PREFIXLEN	128

#endif /* _NETFILTER_NF_LOG_H */
