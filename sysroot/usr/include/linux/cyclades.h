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

#ifndef _LINUX_CYCLADES_H
#define _LINUX_CYCLADES_H

#warning "Support for features provided by this header has been removed"
#warning "Please consider updating your code"

struct cyclades_monitor {
	unsigned long int_count;
	unsigned long char_count;
	unsigned long char_max;
	unsigned long char_last;
};

#define CYGETMON		0x435901
#define CYGETTHRESH		0x435902
#define CYSETTHRESH		0x435903
#define CYGETDEFTHRESH		0x435904
#define CYSETDEFTHRESH		0x435905
#define CYGETTIMEOUT		0x435906
#define CYSETTIMEOUT		0x435907
#define CYGETDEFTIMEOUT		0x435908
#define CYSETDEFTIMEOUT		0x435909
#define CYSETRFLOW		0x43590a
#define CYGETRFLOW		0x43590b
#define CYSETRTSDTR_INV		0x43590c
#define CYGETRTSDTR_INV		0x43590d
#define CYZSETPOLLCYCLE		0x43590e
#define CYZGETPOLLCYCLE		0x43590f
#define CYGETCD1400VER		0x435910
#define CYSETWAIT		0x435912
#define CYGETWAIT		0x435913

#endif /* _LINUX_CYCLADES_H */
