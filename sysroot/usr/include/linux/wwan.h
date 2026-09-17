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

/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note */
/*
 * Copyright (C) 2021 Intel Corporation.
 */
#ifndef _WWAN_H_
#define _WWAN_H_

enum {
	IFLA_WWAN_UNSPEC,
	IFLA_WWAN_LINK_ID, /* u32 */

	__IFLA_WWAN_MAX
};
#define IFLA_WWAN_MAX (__IFLA_WWAN_MAX - 1)

#endif /* _WWAN_H_ */
