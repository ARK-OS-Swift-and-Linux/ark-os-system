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
#ifndef _NFNL_CTHELPER_H_
#define _NFNL_CTHELPER_H_

#define NFCT_HELPER_STATUS_DISABLED	0
#define NFCT_HELPER_STATUS_ENABLED	1

enum nfnl_cthelper_msg_types {
	NFNL_MSG_CTHELPER_NEW,
	NFNL_MSG_CTHELPER_GET,
	NFNL_MSG_CTHELPER_DEL,
	NFNL_MSG_CTHELPER_MAX
};

enum nfnl_cthelper_type {
	NFCTH_UNSPEC,
	NFCTH_NAME,
	NFCTH_TUPLE,
	NFCTH_QUEUE_NUM,
	NFCTH_POLICY,
	NFCTH_PRIV_DATA_LEN,
	NFCTH_STATUS,
	__NFCTH_MAX
};
#define NFCTH_MAX (__NFCTH_MAX - 1)

enum nfnl_cthelper_policy_type {
	NFCTH_POLICY_SET_UNSPEC,
	NFCTH_POLICY_SET_NUM,
	NFCTH_POLICY_SET,
	NFCTH_POLICY_SET1	= NFCTH_POLICY_SET,
	NFCTH_POLICY_SET2,
	NFCTH_POLICY_SET3,
	NFCTH_POLICY_SET4,
	__NFCTH_POLICY_SET_MAX
};
#define NFCTH_POLICY_SET_MAX (__NFCTH_POLICY_SET_MAX - 1)

enum nfnl_cthelper_pol_type {
	NFCTH_POLICY_UNSPEC,
	NFCTH_POLICY_NAME,
	NFCTH_POLICY_EXPECT_MAX,
	NFCTH_POLICY_EXPECT_TIMEOUT,
	__NFCTH_POLICY_MAX
};
#define NFCTH_POLICY_MAX (__NFCTH_POLICY_MAX - 1)

enum nfnl_cthelper_tuple_type {
	NFCTH_TUPLE_UNSPEC,
	NFCTH_TUPLE_L3PROTONUM,
	NFCTH_TUPLE_L4PROTONUM,
	__NFCTH_TUPLE_MAX,
};
#define NFCTH_TUPLE_MAX (__NFCTH_TUPLE_MAX - 1)

#endif /* _NFNL_CTHELPER_H */
