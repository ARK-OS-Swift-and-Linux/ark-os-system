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
#ifndef _LINUX_CACHEFILES_H
#define _LINUX_CACHEFILES_H

#include <linux/types.h>
#include <linux/ioctl.h>

/*
 * Fscache ensures that the maximum length of cookie key is 255. The volume key
 * is controlled by netfs, and generally no bigger than 255.
 */
#define CACHEFILES_MSG_MAX_SIZE	1024

enum cachefiles_opcode {
	CACHEFILES_OP_OPEN,
	CACHEFILES_OP_CLOSE,
	CACHEFILES_OP_READ,
};

/*
 * Message Header
 *
 * @msg_id	a unique ID identifying this message
 * @opcode	message type, CACHEFILE_OP_*
 * @len		message length, including message header and following data
 * @object_id	a unique ID identifying a cache file
 * @data	message type specific payload
 */
struct cachefiles_msg {
	__u32 msg_id;
	__u32 opcode;
	__u32 len;
	__u32 object_id;
	__u8  data[];
};

/*
 * @data contains the volume_key followed directly by the cookie_key. volume_key
 * is a NUL-terminated string; @volume_key_size indicates the size of the volume
 * key in bytes. cookie_key is binary data, which is netfs specific;
 * @cookie_key_size indicates the size of the cookie key in bytes.
 *
 * @fd identifies an anon_fd referring to the cache file.
 */
struct cachefiles_open {
	__u32 volume_key_size;
	__u32 cookie_key_size;
	__u32 fd;
	__u32 flags;
	__u8  data[];
};

/*
 * @off		indicates the starting offset of the requested file range
 * @len		indicates the length of the requested file range
 */
struct cachefiles_read {
	__u64 off;
	__u64 len;
};

/*
 * Reply for READ request
 * @arg for this ioctl is the @id field of READ request.
 */
#define CACHEFILES_IOC_READ_COMPLETE	_IOW(0x98, 1, int)

#endif
