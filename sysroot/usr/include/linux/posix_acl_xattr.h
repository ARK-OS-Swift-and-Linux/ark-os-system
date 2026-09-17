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
 * Copyright (C) 2002 Andreas Gruenbacher <a.gruenbacher@computer.org>
 * Copyright (C) 2016 Red Hat, Inc.
 *
 * This file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */

#ifndef __UAPI_POSIX_ACL_XATTR_H
#define __UAPI_POSIX_ACL_XATTR_H

#include <linux/types.h>

/* Supported ACL a_version fields */
#define POSIX_ACL_XATTR_VERSION	0x0002

/* An undefined entry e_id value */
#define ACL_UNDEFINED_ID	(-1)

struct posix_acl_xattr_entry {
	__le16			e_tag;
	__le16			e_perm;
	__le32			e_id;
};

struct posix_acl_xattr_header {
	__le32			a_version;
};

#endif	/* __UAPI_POSIX_ACL_XATTR_H */
