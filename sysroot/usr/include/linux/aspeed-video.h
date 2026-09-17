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
/*
 * Copyright (C) 2021 ASPEED Technology Inc.
 */

#ifndef _LINUX_ASPEED_VIDEO_H
#define _LINUX_ASPEED_VIDEO_H

#include <linux/v4l2-controls.h>

/* aspeed video's input types */
enum aspeed_video_input {
	VIDEO_INPUT_VGA = 0,
	VIDEO_INPUT_GFX,
	VIDEO_INPUT_MAX
};

#define V4L2_CID_ASPEED_HQ_MODE			(V4L2_CID_USER_ASPEED_BASE  + 1)
#define V4L2_CID_ASPEED_HQ_JPEG_QUALITY		(V4L2_CID_USER_ASPEED_BASE  + 2)

#endif /* _LINUX_ASPEED_VIDEO_H */
