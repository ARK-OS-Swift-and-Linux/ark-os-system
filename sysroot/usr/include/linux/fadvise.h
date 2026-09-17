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
#ifndef FADVISE_H_INCLUDED
#define FADVISE_H_INCLUDED

#define POSIX_FADV_NORMAL	0 /* No further special treatment.  */
#define POSIX_FADV_RANDOM	1 /* Expect random page references.  */
#define POSIX_FADV_SEQUENTIAL	2 /* Expect sequential page references.  */
#define POSIX_FADV_WILLNEED	3 /* Will need these pages.  */

/*
 * The advise values for POSIX_FADV_DONTNEED and POSIX_ADV_NOREUSE
 * for s390-64 differ from the values for the rest of the world.
 */
#if defined(__s390x__)
#define POSIX_FADV_DONTNEED	6 /* Don't need these pages.  */
#define POSIX_FADV_NOREUSE	7 /* Data will be accessed once.  */
#else
#define POSIX_FADV_DONTNEED	4 /* Don't need these pages.  */
#define POSIX_FADV_NOREUSE	5 /* Data will be accessed once.  */
#endif

#endif	/* FADVISE_H_INCLUDED */
