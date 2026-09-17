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

/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef _LINUX_VIRTIO_BT_H
#define _LINUX_VIRTIO_BT_H

#include <linux/virtio_types.h>

/* Feature bits */
#define VIRTIO_BT_F_VND_HCI	0	/* Indicates vendor command support */
#define VIRTIO_BT_F_MSFT_EXT	1	/* Indicates MSFT vendor support */
#define VIRTIO_BT_F_AOSP_EXT	2	/* Indicates AOSP vendor support */
#define VIRTIO_BT_F_CONFIG_V2	3	/* Use second version configuration */

enum virtio_bt_config_type {
	VIRTIO_BT_CONFIG_TYPE_PRIMARY	= 0,
};

enum virtio_bt_config_vendor {
	VIRTIO_BT_CONFIG_VENDOR_NONE	= 0,
	VIRTIO_BT_CONFIG_VENDOR_ZEPHYR	= 1,
	VIRTIO_BT_CONFIG_VENDOR_INTEL	= 2,
	VIRTIO_BT_CONFIG_VENDOR_REALTEK	= 3,
};

struct virtio_bt_config {
	__u8  type;
	__u16 vendor;
	__u16 msft_opcode;
} __attribute__((packed));

struct virtio_bt_config_v2 {
	__u8  type;
	__u8  alignment;
	__u16 vendor;
	__u16 msft_opcode;
};

#endif /* _LINUX_VIRTIO_BT_H */
