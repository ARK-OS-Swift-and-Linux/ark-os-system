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
#ifndef _LINUX_TIME_TYPES_H
#define _LINUX_TIME_TYPES_H

#include <linux/types.h>

struct __kernel_timespec {
	__kernel_time64_t       tv_sec;                 /* seconds */
	long long               tv_nsec;                /* nanoseconds */
};

struct __kernel_itimerspec {
	struct __kernel_timespec it_interval;    /* timer period */
	struct __kernel_timespec it_value;       /* timer expiration */
};

/*
 * legacy timeval structure, only embedded in structures that
 * traditionally used 'timeval' to pass time intervals (not absolute
 * times). Do not add new users. If user space fails to compile
 * here, this is probably because it is not y2038 safe and needs to
 * be changed to use another interface.
 */
#ifndef __kernel_old_timeval
struct __kernel_old_timeval {
	__kernel_long_t tv_sec;
	__kernel_long_t tv_usec;
};
#endif

struct __kernel_old_timespec {
	__kernel_old_time_t	tv_sec;		/* seconds */
	long			tv_nsec;	/* nanoseconds */
};

struct __kernel_old_itimerval {
	struct __kernel_old_timeval it_interval;/* timer interval */
	struct __kernel_old_timeval it_value;	/* current value */
};

struct __kernel_sock_timeval {
	__s64 tv_sec;
	__s64 tv_usec;
};

#endif /* _LINUX_TIME_TYPES_H */
