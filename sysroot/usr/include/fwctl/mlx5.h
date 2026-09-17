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
 * Copyright (c) 2024-2025, NVIDIA CORPORATION & AFFILIATES
 *
 * These are definitions for the command interface for mlx5 HW. mlx5 FW has a
 * User Context mechanism which allows the FW to understand a security scope.
 * FWCTL binds each FD to a FW user context and then places the User Context ID
 * (UID) in each command header. The created User Context has a capability set
 * that is appropriate for FWCTL's security model.
 *
 * Command formation should use a copy of the structs in mlx5_ifc.h following
 * the Programmers Reference Manual. A open release is available here:
 *
 *  https://network.nvidia.com/files/doc-2020/ethernet-adapters-programming-manual.pdf
 *
 * The device_type for this file is FWCTL_DEVICE_TYPE_MLX5.
 */
#ifndef _FWCTL_MLX5_H
#define _FWCTL_MLX5_H

#include <linux/types.h>

/**
 * struct fwctl_info_mlx5 - ioctl(FWCTL_INFO) out_device_data
 * @uid: The FW UID this FD is bound to. Each command header will force
 *	this value.
 * @uctx_caps: The FW capabilities that are enabled for the uid.
 *
 * Return basic information about the FW interface available.
 */
struct fwctl_info_mlx5 {
	__u32 uid;
	__u32 uctx_caps;
};

#endif
