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
 * Kernel Connection Multiplexor
 *
 * Copyright (c) 2016 Tom Herbert <tom@herbertland.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * User API to clone KCM sockets and attach transport socket to a KCM
 * multiplexor.
 */

#ifndef KCM_KERNEL_H
#define KCM_KERNEL_H

struct kcm_attach {
	int fd;
	int bpf_fd;
};

struct kcm_unattach {
	int fd;
};

struct kcm_clone {
	int fd;
};

#define SIOCKCMATTACH	(SIOCPROTOPRIVATE + 0)
#define SIOCKCMUNATTACH	(SIOCPROTOPRIVATE + 1)
#define SIOCKCMCLONE	(SIOCPROTOPRIVATE + 2)

#define KCMPROTO_CONNECTED	0

/* Socket options */
#define KCM_RECV_DISABLE	1

#endif

