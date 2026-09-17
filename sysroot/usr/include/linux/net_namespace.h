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
/* Copyright (c) 2015 6WIND S.A.
 * Author: Nicolas Dichtel <nicolas.dichtel@6wind.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 */
#ifndef _LINUX_NET_NAMESPACE_H_
#define _LINUX_NET_NAMESPACE_H_

/* Attributes of RTM_NEWNSID/RTM_GETNSID messages */
enum {
	NETNSA_NONE,
#define NETNSA_NSID_NOT_ASSIGNED -1
	NETNSA_NSID,
	NETNSA_PID,
	NETNSA_FD,
	NETNSA_TARGET_NSID,
	NETNSA_CURRENT_NSID,
	__NETNSA_MAX,
};

#define NETNSA_MAX		(__NETNSA_MAX - 1)

#endif /* _LINUX_NET_NAMESPACE_H_ */
