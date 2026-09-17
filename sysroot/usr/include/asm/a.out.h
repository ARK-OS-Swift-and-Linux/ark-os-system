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
#ifndef _ASM_X86_A_OUT_H
#define _ASM_X86_A_OUT_H

struct exec
{
	unsigned int a_info;	/* Use macros N_MAGIC, etc for access */
	unsigned a_text;	/* length of text, in bytes */
	unsigned a_data;	/* length of data, in bytes */
	unsigned a_bss;		/* length of uninitialized data area for file, in bytes */
	unsigned a_syms;	/* length of symbol table data in file, in bytes */
	unsigned a_entry;	/* start address */
	unsigned a_trsize;	/* length of relocation info for text, in bytes */
	unsigned a_drsize;	/* length of relocation info for data, in bytes */
};

#define N_TRSIZE(a)	((a).a_trsize)
#define N_DRSIZE(a)	((a).a_drsize)
#define N_SYMSIZE(a)	((a).a_syms)

#endif /* _ASM_X86_A_OUT_H */
