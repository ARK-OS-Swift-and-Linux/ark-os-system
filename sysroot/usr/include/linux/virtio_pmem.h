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

/* SPDX-License-Identifier: (GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause */
/*
 * Definitions for virtio-pmem devices.
 *
 * Copyright (C) 2019 Red Hat, Inc.
 *
 * Author(s): Pankaj Gupta <pagupta@redhat.com>
 */

#ifndef _LINUX_VIRTIO_PMEM_H
#define _LINUX_VIRTIO_PMEM_H

#include <linux/types.h>
#include <linux/virtio_ids.h>
#include <linux/virtio_config.h>

/* Feature bits */
/* guest physical address range will be indicated as shared memory region 0 */
#define VIRTIO_PMEM_F_SHMEM_REGION 0

/* shmid of the shared memory region corresponding to the pmem */
#define VIRTIO_PMEM_SHMEM_REGION_ID 0

struct virtio_pmem_config {
	__le64 start;
	__le64 size;
};

#define VIRTIO_PMEM_REQ_TYPE_FLUSH      0

struct virtio_pmem_resp {
	/* Host return status corresponding to flush request */
	__le32 ret;
};

struct virtio_pmem_req {
	/* command type */
	__le32 type;
};

#endif
