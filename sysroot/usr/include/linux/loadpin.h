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
 * Copyright (c) 2022, Google LLC
 */

#ifndef _LINUX_LOOP_LOADPIN_H
#define _LINUX_LOOP_LOADPIN_H

#define LOADPIN_IOC_MAGIC	'L'

/**
 * LOADPIN_IOC_SET_TRUSTED_VERITY_DIGESTS - Set up the root digests of verity devices
 *                                          that loadpin should trust.
 *
 * Takes a file descriptor from which to read the root digests of trusted verity devices. The file
 * is expected to contain a list of digests in ASCII format, with one line per digest. The ioctl
 * must be issued on the securityfs attribute 'loadpin/dm-verity' (which can be typically found
 * under /sys/kernel/security/loadpin/dm-verity).
 */
#define LOADPIN_IOC_SET_TRUSTED_VERITY_DIGESTS _IOW(LOADPIN_IOC_MAGIC, 0x00, unsigned int)

#endif /* _LINUX_LOOP_LOADPIN_H */
