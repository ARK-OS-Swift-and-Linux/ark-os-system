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
#ifndef _LINUX_CLOSE_RANGE_H
#define _LINUX_CLOSE_RANGE_H

/* Unshare the file descriptor table before closing file descriptors. */
#define CLOSE_RANGE_UNSHARE	(1U << 1)

/* Set the FD_CLOEXEC bit instead of closing the file descriptor. */
#define CLOSE_RANGE_CLOEXEC	(1U << 2)

#endif /* _LINUX_CLOSE_RANGE_H */

