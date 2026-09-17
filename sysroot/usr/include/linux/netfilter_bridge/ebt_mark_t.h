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
#ifndef __LINUX_BRIDGE_EBT_MARK_T_H
#define __LINUX_BRIDGE_EBT_MARK_T_H

/* The target member is reused for adding new actions, the
 * value of the real target is -1 to -NUM_STANDARD_TARGETS.
 * For backward compatibility, the 4 lsb (2 would be enough,
 * but let's play it safe) are kept to designate this target.
 * The remaining bits designate the action. By making the set
 * action 0xfffffff0, the result will look ok for older
 * versions. [September 2006] */
#define MARK_SET_VALUE (0xfffffff0)
#define MARK_OR_VALUE  (0xffffffe0)
#define MARK_AND_VALUE (0xffffffd0)
#define MARK_XOR_VALUE (0xffffffc0)

struct ebt_mark_t_info {
	unsigned long mark;
	/* EBT_ACCEPT, EBT_DROP, EBT_CONTINUE or EBT_RETURN */
	int target;
};
#define EBT_MARK_TARGET "mark"

#endif
