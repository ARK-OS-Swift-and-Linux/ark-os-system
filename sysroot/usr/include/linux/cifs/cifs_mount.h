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

/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
/*
 *
 *   Author(s): Scott Lovenberg (scott.lovenberg@gmail.com)
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published
 *   by the Free Software Foundation; either version 2.1 of the License, or
 *   (at your option) any later version.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 *   the GNU Lesser General Public License for more details.
 */
#ifndef _CIFS_MOUNT_H
#define _CIFS_MOUNT_H

/* Max string lengths for cifs mounting options. */
#define CIFS_MAX_DOMAINNAME_LEN 256 /* max fully qualified domain name */
#define CIFS_MAX_USERNAME_LEN   256 /* reasonable max for current servers */
#define CIFS_MAX_PASSWORD_LEN   512 /* Windows max seems to be 256 wide chars */
#define CIFS_MAX_SHARE_LEN      256 /* reasonable max share name length */
#define CIFS_NI_MAXHOST        1024 /* max host name length (256 * 4 bytes) */


#endif /* _CIFS_MOUNT_H */
