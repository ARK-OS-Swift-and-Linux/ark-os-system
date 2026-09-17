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

/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note */
/*
 * RP1 PiSP Front End statistics definitions
 *
 * Copyright (C) 2021 - Raspberry Pi Ltd.
 *
 */
#ifndef _PISP_FE_STATISTICS_H_
#define _PISP_FE_STATISTICS_H_

#include <linux/types.h>

#define PISP_FLOATING_STATS_NUM_ZONES 4
#define PISP_AGC_STATS_NUM_BINS 1024
#define PISP_AGC_STATS_SIZE 16
#define PISP_AGC_STATS_NUM_ZONES (PISP_AGC_STATS_SIZE * PISP_AGC_STATS_SIZE)
#define PISP_AGC_STATS_NUM_ROW_SUMS 512

struct pisp_agc_statistics_zone {
	__u64 Y_sum;
	__u32 counted;
	__u32 pad;
} __attribute__((packed));

struct pisp_agc_statistics {
	__u32 row_sums[PISP_AGC_STATS_NUM_ROW_SUMS];
	/*
	 * 32-bits per bin means an image (just less than) 16384x16384 pixels
	 * in size can weight every pixel from 0 to 15.
	 */
	__u32 histogram[PISP_AGC_STATS_NUM_BINS];
	struct pisp_agc_statistics_zone floating[PISP_FLOATING_STATS_NUM_ZONES];
} __attribute__((packed));

#define PISP_AWB_STATS_SIZE 32
#define PISP_AWB_STATS_NUM_ZONES (PISP_AWB_STATS_SIZE * PISP_AWB_STATS_SIZE)

struct pisp_awb_statistics_zone {
	__u32 R_sum;
	__u32 G_sum;
	__u32 B_sum;
	__u32 counted;
} __attribute__((packed));

struct pisp_awb_statistics {
	struct pisp_awb_statistics_zone zones[PISP_AWB_STATS_NUM_ZONES];
	struct pisp_awb_statistics_zone floating[PISP_FLOATING_STATS_NUM_ZONES];
} __attribute__((packed));

#define PISP_CDAF_STATS_SIZE 8
#define PISP_CDAF_STATS_NUM_FOMS (PISP_CDAF_STATS_SIZE * PISP_CDAF_STATS_SIZE)

struct pisp_cdaf_statistics {
	__u64 foms[PISP_CDAF_STATS_NUM_FOMS];
	__u64 floating[PISP_FLOATING_STATS_NUM_ZONES];
} __attribute__((packed));

struct pisp_statistics {
	struct pisp_awb_statistics awb;
	struct pisp_agc_statistics agc;
	struct pisp_cdaf_statistics cdaf;
} __attribute__((packed));

#endif /* _PISP_FE_STATISTICS_H_ */
