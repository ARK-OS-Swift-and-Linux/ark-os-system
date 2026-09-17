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

/* SPDX-License-Identifier: GPL-2.0+ WITH Linux-syscall-note */
#ifndef _HISI_QM_H
#define _HISI_QM_H

#include <linux/types.h>

/**
 * struct hisi_qp_ctx - User data for hisi qp.
 * @id: qp_index return to user space
 * @qc_type: Accelerator algorithm type
 */
struct hisi_qp_ctx {
	__u16 id;
	__u16 qc_type;
};

/**
 * struct hisi_qp_info - User data for hisi qp.
 * @sqe_size: Submission queue element size
 * @sq_depth: The number of sqe
 * @cq_depth: The number of cqe
 * @reserved: Reserved data
 */
struct hisi_qp_info {
	__u32 sqe_size;
	__u16 sq_depth;
	__u16 cq_depth;
	__u64 reserved;
};

#define HISI_QM_API_VER_BASE "hisi_qm_v1"
#define HISI_QM_API_VER2_BASE "hisi_qm_v2"
#define HISI_QM_API_VER3_BASE "hisi_qm_v3"
#define HISI_QM_API_VER5_BASE "hisi_qm_v5"

/* UACCE_CMD_QM_SET_QP_CTX: Set qp algorithm type */
#define UACCE_CMD_QM_SET_QP_CTX	_IOWR('H', 10, struct hisi_qp_ctx)
/* UACCE_CMD_QM_SET_QP_INFO: Set qp depth and BD size */
#define UACCE_CMD_QM_SET_QP_INFO _IOWR('H', 11, struct hisi_qp_info)
#endif
