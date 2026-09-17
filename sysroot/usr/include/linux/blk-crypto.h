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
#ifndef _LINUX_BLK_CRYPTO_H
#define _LINUX_BLK_CRYPTO_H

#include <linux/ioctl.h>
#include <linux/types.h>

struct blk_crypto_import_key_arg {
	/* Raw key (input) */
	__u64 raw_key_ptr;
	__u64 raw_key_size;
	/* Long-term wrapped key blob (output) */
	__u64 lt_key_ptr;
	__u64 lt_key_size;
	__u64 reserved[4];
};

struct blk_crypto_generate_key_arg {
	/* Long-term wrapped key blob (output) */
	__u64 lt_key_ptr;
	__u64 lt_key_size;
	__u64 reserved[4];
};

struct blk_crypto_prepare_key_arg {
	/* Long-term wrapped key blob (input) */
	__u64 lt_key_ptr;
	__u64 lt_key_size;
	/* Ephemerally-wrapped key blob (output) */
	__u64 eph_key_ptr;
	__u64 eph_key_size;
	__u64 reserved[4];
};

/*
 * These ioctls share the block device ioctl space; see uapi/linux/fs.h.
 * 140-141 are reserved for future blk-crypto ioctls; any more than that would
 * require an additional allocation from the block device ioctl space.
 */
#define BLKCRYPTOIMPORTKEY _IOWR(0x12, 137, struct blk_crypto_import_key_arg)
#define BLKCRYPTOGENERATEKEY _IOWR(0x12, 138, struct blk_crypto_generate_key_arg)
#define BLKCRYPTOPREPAREKEY _IOWR(0x12, 139, struct blk_crypto_prepare_key_arg)

#endif /* _LINUX_BLK_CRYPTO_H */
