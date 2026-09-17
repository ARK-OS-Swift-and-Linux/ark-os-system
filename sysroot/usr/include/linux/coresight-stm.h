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
#ifndef __UAPI_CORESIGHT_STM_H_
#define __UAPI_CORESIGHT_STM_H_

#include <linux/const.h>

#define STM_FLAG_TIMESTAMPED   _BITUL(3)
#define STM_FLAG_MARKED        _BITUL(4)
#define STM_FLAG_GUARANTEED    _BITUL(7)

/*
 * The CoreSight STM supports guaranteed and invariant timing
 * transactions.  Guaranteed transactions are guaranteed to be
 * traced, this might involve stalling the bus or system to
 * ensure the transaction is accepted by the STM.  While invariant
 * timing transactions are not guaranteed to be traced, they
 * will take an invariant amount of time regardless of the
 * state of the STM.
 */
enum {
	STM_OPTION_GUARANTEED = 0,
	STM_OPTION_INVARIANT,
};

#endif
