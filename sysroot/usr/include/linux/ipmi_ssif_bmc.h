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

/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note*/
/*
 * Copyright (c) 2022, Ampere Computing LLC.
 */

#ifndef _LINUX_IPMI_SSIF_BMC_H
#define _LINUX_IPMI_SSIF_BMC_H

#include <linux/types.h>

/* Max length of ipmi ssif message included netfn and cmd field */
#define IPMI_SSIF_PAYLOAD_MAX         254
struct ipmi_ssif_msg {
	unsigned int len;
	__u8    payload[IPMI_SSIF_PAYLOAD_MAX];
};

#endif /* _LINUX_IPMI_SSIF_BMC_H */
