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
#ifndef _LINUX_VESA_H
#define _LINUX_VESA_H

/* VESA Blanking Levels */
enum vesa_blank_mode {
	VESA_NO_BLANKING	= 0,
#define VESA_NO_BLANKING	VESA_NO_BLANKING
	VESA_VSYNC_SUSPEND	= 1,
#define VESA_VSYNC_SUSPEND	VESA_VSYNC_SUSPEND
	VESA_HSYNC_SUSPEND	= 2,
#define VESA_HSYNC_SUSPEND	VESA_HSYNC_SUSPEND
	VESA_POWERDOWN		= VESA_VSYNC_SUSPEND | VESA_HSYNC_SUSPEND,
#define VESA_POWERDOWN		VESA_POWERDOWN
	VESA_BLANK_MAX		= VESA_POWERDOWN,
};

#endif
