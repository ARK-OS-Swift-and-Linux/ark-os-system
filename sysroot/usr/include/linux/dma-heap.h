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
 * DMABUF Heaps Userspace API
 *
 * Copyright (C) 2011 Google, Inc.
 * Copyright (C) 2019 Linaro Ltd.
 */
#ifndef _LINUX_DMABUF_POOL_H
#define _LINUX_DMABUF_POOL_H

#include <linux/ioctl.h>
#include <linux/types.h>

/**
 * DOC: DMABUF Heaps Userspace API
 */

/* Valid FD_FLAGS are O_CLOEXEC, O_RDONLY, O_WRONLY, O_RDWR */
#define DMA_HEAP_VALID_FD_FLAGS (O_CLOEXEC | O_ACCMODE)

/* Currently no heap flags */
#define DMA_HEAP_VALID_HEAP_FLAGS (0ULL)

/**
 * struct dma_heap_allocation_data - metadata passed from userspace for
 *                                      allocations
 * @len:		size of the allocation
 * @fd:			will be populated with a fd which provides the
 *			handle to the allocated dma-buf
 * @fd_flags:		file descriptor flags used when allocating
 * @heap_flags:		flags passed to heap
 *
 * Provided by userspace as an argument to the ioctl
 */
struct dma_heap_allocation_data {
	__u64 len;
	__u32 fd;
	__u32 fd_flags;
	__u64 heap_flags;
};

#define DMA_HEAP_IOC_MAGIC		'H'

/**
 * DOC: DMA_HEAP_IOCTL_ALLOC - allocate memory from pool
 *
 * Takes a dma_heap_allocation_data struct and returns it with the fd field
 * populated with the dmabuf handle of the allocation.
 */
#define DMA_HEAP_IOCTL_ALLOC	_IOWR(DMA_HEAP_IOC_MAGIC, 0x0,\
				      struct dma_heap_allocation_data)

#endif /* _LINUX_DMABUF_POOL_H */
