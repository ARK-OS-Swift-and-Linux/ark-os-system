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
#ifndef _XT_SOCKET_H
#define _XT_SOCKET_H

#include <linux/types.h>

enum {
	XT_SOCKET_TRANSPARENT = 1 << 0,
	XT_SOCKET_NOWILDCARD = 1 << 1,
	XT_SOCKET_RESTORESKMARK = 1 << 2,
};

struct xt_socket_mtinfo1 {
	__u8 flags;
};
#define XT_SOCKET_FLAGS_V1 XT_SOCKET_TRANSPARENT

struct xt_socket_mtinfo2 {
	__u8 flags;
};
#define XT_SOCKET_FLAGS_V2 (XT_SOCKET_TRANSPARENT | XT_SOCKET_NOWILDCARD)

struct xt_socket_mtinfo3 {
	__u8 flags;
};
#define XT_SOCKET_FLAGS_V3 (XT_SOCKET_TRANSPARENT \
			   | XT_SOCKET_NOWILDCARD \
			   | XT_SOCKET_RESTORESKMARK)

#endif /* _XT_SOCKET_H */
