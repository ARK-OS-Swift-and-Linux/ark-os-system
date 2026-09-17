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

#ifndef LINUX_IO_URING_MOCK_FILE_H
#define LINUX_IO_URING_MOCK_FILE_H

#include <linux/types.h>

enum {
	IORING_MOCK_FEAT_CMD_COPY,
	IORING_MOCK_FEAT_RW_ZERO,
	IORING_MOCK_FEAT_RW_NOWAIT,
	IORING_MOCK_FEAT_RW_ASYNC,
	IORING_MOCK_FEAT_POLL,

	IORING_MOCK_FEAT_END,
};

struct io_uring_mock_probe {
	__u64		features;
	__u64		__resv[9];
};

enum {
	IORING_MOCK_CREATE_F_SUPPORT_NOWAIT			= 1,
	IORING_MOCK_CREATE_F_POLL				= 2,
};

struct io_uring_mock_create {
	__u32		out_fd;
	__u32		flags;
	__u64		file_size;
	__u64		rw_delay_ns;
	__u64		__resv[13];
};

enum {
	IORING_MOCK_MGR_CMD_PROBE,
	IORING_MOCK_MGR_CMD_CREATE,
};

enum {
	IORING_MOCK_CMD_COPY_REGBUF,
};

enum {
	IORING_MOCK_COPY_FROM			= 1,
};

#endif
