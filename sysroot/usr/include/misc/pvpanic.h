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

#ifndef __PVPANIC_H__
#define __PVPANIC_H__

#include <linux/const.h>

#define PVPANIC_PANICKED	_BITUL(0)
#define PVPANIC_CRASH_LOADED	_BITUL(1)
#define PVPANIC_SHUTDOWN	_BITUL(2)

#endif /* __PVPANIC_H__ */
