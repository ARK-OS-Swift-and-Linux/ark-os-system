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

/* SPDX-License-Identifier: ((GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause) */
/*
 * Copyright (C) 2020-2021 OpenSynergy GmbH
 * Copyright (C) 2021 ARM Ltd.
 */

#ifndef _LINUX_VIRTIO_SCMI_H
#define _LINUX_VIRTIO_SCMI_H

#include <linux/virtio_types.h>

/* Device implements some SCMI notifications, or delayed responses. */
#define VIRTIO_SCMI_F_P2A_CHANNELS 0

/* Device implements any SCMI statistics shared memory region */
#define VIRTIO_SCMI_F_SHARED_MEMORY 1

/* Virtqueues */

#define VIRTIO_SCMI_VQ_TX 0 /* cmdq */
#define VIRTIO_SCMI_VQ_RX 1 /* eventq */
#define VIRTIO_SCMI_VQ_MAX_CNT 2

#endif /* _LINUX_VIRTIO_SCMI_H */
