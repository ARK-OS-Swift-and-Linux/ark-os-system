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
#ifndef __IP_SET_LIST_H
#define __IP_SET_LIST_H

#include <linux/netfilter/ipset/ip_set.h>

/* List type specific error codes */
enum {
	/* Set name to be added/deleted/tested does not exist. */
	IPSET_ERR_NAME = IPSET_ERR_TYPE_SPECIFIC,
	/* list:set type is not permitted to add */
	IPSET_ERR_LOOP,
	/* Missing reference set */
	IPSET_ERR_BEFORE,
	/* Reference set does not exist */
	IPSET_ERR_NAMEREF,
	/* Set is full */
	IPSET_ERR_LIST_FULL,
	/* Reference set is not added to the set */
	IPSET_ERR_REF_EXIST,
};


#endif /* __IP_SET_LIST_H */
