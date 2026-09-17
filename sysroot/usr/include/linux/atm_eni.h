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
/* atm_eni.h - Driver-specific declarations of the ENI driver (for use by
	       driver-specific utilities) */

/* Written 1995-2000 by Werner Almesberger, EPFL LRC/ICA */


#ifndef LINUX_ATM_ENI_H
#define LINUX_ATM_ENI_H

#include <linux/atmioc.h>


struct eni_multipliers {
	int tx,rx;	/* values are in percent and must be > 100 */
};


#define ENI_MEMDUMP     _IOW('a',ATMIOC_SARPRV,struct atmif_sioc)
                                                /* printk memory map */
#define ENI_SETMULT	_IOW('a',ATMIOC_SARPRV+7,struct atmif_sioc)
						/* set buffer multipliers */

#endif
