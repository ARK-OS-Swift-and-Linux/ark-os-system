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
#ifndef _IP6T_AH_H
#define _IP6T_AH_H

#include <linux/types.h>

struct ip6t_ah {
	__u32 spis[2];			/* Security Parameter Index */
	__u32 hdrlen;			/* Header Length */
	__u8  hdrres;			/* Test of the Reserved Filed */
	__u8  invflags;			/* Inverse flags */
};

#define IP6T_AH_SPI 0x01
#define IP6T_AH_LEN 0x02
#define IP6T_AH_RES 0x04

/* Values for "invflags" field in struct ip6t_ah. */
#define IP6T_AH_INV_SPI		0x01	/* Invert the sense of spi. */
#define IP6T_AH_INV_LEN		0x02	/* Invert the sense of length. */
#define IP6T_AH_INV_MASK	0x03	/* All possible flags. */

#endif /*_IP6T_AH_H*/
