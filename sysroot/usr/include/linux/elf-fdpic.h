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

/* SPDX-License-Identifier: GPL-2.0+ WITH Linux-syscall-note */
/* elf-fdpic.h: FDPIC ELF load map
 *
 * Copyright (C) 2003 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _LINUX_ELF_FDPIC_H
#define _LINUX_ELF_FDPIC_H

#include <linux/elf.h>

#define PT_GNU_STACK    (PT_LOOS + 0x474e551)

/* segment mappings for ELF FDPIC libraries/executables/interpreters */
struct elf32_fdpic_loadseg {
	Elf32_Addr	addr;		/* core address to which mapped */
	Elf32_Addr	p_vaddr;	/* VMA recorded in file */
	Elf32_Word	p_memsz;	/* allocation size recorded in file */
};

struct elf32_fdpic_loadmap {
	Elf32_Half	version;	/* version of these structures, just in case... */
	Elf32_Half	nsegs;		/* number of segments */
	struct elf32_fdpic_loadseg segs[];
};

#define ELF32_FDPIC_LOADMAP_VERSION	0x0000

/* segment mappings for ELF FDPIC libraries/executables/interpreters */
struct elf64_fdpic_loadseg {
	Elf64_Addr	addr;		/* core address to which mapped */
	Elf64_Addr	p_vaddr;	/* VMA recorded in file */
	Elf64_Word	p_memsz;	/* allocation size recorded in file */
};

struct elf64_fdpic_loadmap {
	Elf64_Half	version;	/* version of these structures, just in case... */
	Elf64_Half	nsegs;		/* number of segments */
	struct elf64_fdpic_loadseg segs[];
};

#define ELF64_FDPIC_LOADMAP_VERSION	0x0000

#endif /* _LINUX_ELF_FDPIC_H */
