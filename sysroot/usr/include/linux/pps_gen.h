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
/*
 * PPS generator API header
 *
 * Copyright (C) 2024 Rodolfo Giometti <giometti@enneenne.com>
 */

#ifndef _PPS_GEN_H_
#define _PPS_GEN_H_

#include <linux/types.h>
#include <linux/ioctl.h>

/**
 * struct pps_gen_event - the PPS generator events
 * @event: the event type
 * @sequence: the event sequence number
 *
 * Userspace can get the last PPS generator event by using the
 * ioctl(pps_gen, PPS_GEN_FETCHEVENT, ...) syscall.
 * The sequence field can be used to save the last event ID, while in the
 * event field is stored the last event type. Currently known event is:
 *
 *     PPS_GEN_EVENT_MISSEDPULSE	: last pulse was not generated
 */
struct pps_gen_event {
	unsigned int event;
	unsigned int sequence;
};

#define PPS_GEN_EVENT_MISSEDPULSE	1

#define PPS_GEN_SETENABLE		_IOW('p', 0xb1, unsigned int *)
#define PPS_GEN_USESYSTEMCLOCK		_IOR('p', 0xb2, unsigned int *)
#define PPS_GEN_FETCHEVENT		_IOR('p', 0xb3, struct pps_gen_event *)

#endif /* _PPS_GEN_H_ */
