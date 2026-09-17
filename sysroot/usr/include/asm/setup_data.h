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
#ifndef _ASM_X86_SETUP_DATA_H
#define _ASM_X86_SETUP_DATA_H

/* setup_data/setup_indirect types */
#define SETUP_NONE			0
#define SETUP_E820_EXT			1
#define SETUP_DTB			2
#define SETUP_PCI			3
#define SETUP_EFI			4
#define SETUP_APPLE_PROPERTIES		5
#define SETUP_JAILHOUSE			6
#define SETUP_CC_BLOB			7
#define SETUP_IMA			8
#define SETUP_RNG_SEED			9
#define SETUP_KEXEC_KHO			10
#define SETUP_ENUM_MAX			SETUP_KEXEC_KHO

#define SETUP_INDIRECT			(1<<31)
#define SETUP_TYPE_MAX			(SETUP_ENUM_MAX | SETUP_INDIRECT)

#ifndef __ASSEMBLER__

#include <linux/types.h>

/* extensible setup data list node */
struct setup_data {
	__u64 next;
	__u32 type;
	__u32 len;
	__u8 data[];
};

/* extensible setup indirect data node */
struct setup_indirect {
	__u32 type;
	__u32 reserved;  /* Reserved, must be set to zero. */
	__u64 len;
	__u64 addr;
};

/*
 * The E820 memory region entry of the boot protocol ABI:
 */
struct boot_e820_entry {
	__u64 addr;
	__u64 size;
	__u32 type;
} __attribute__((packed));

/*
 * The boot loader is passing platform information via this Jailhouse-specific
 * setup data structure.
 */
struct jailhouse_setup_data {
	struct {
		__u16	version;
		__u16	compatible_version;
	} __attribute__((packed)) hdr;
	struct {
		__u16	pm_timer_address;
		__u16	num_cpus;
		__u64	pci_mmconfig_base;
		__u32	tsc_khz;
		__u32	apic_khz;
		__u8	standard_ioapic;
		__u8	cpu_ids[255];
	} __attribute__((packed)) v1;
	struct {
		__u32	flags;
	} __attribute__((packed)) v2;
} __attribute__((packed));

/*
 * IMA buffer setup data information from the previous kernel during kexec
 */
struct ima_setup_data {
	__u64 addr;
	__u64 size;
} __attribute__((packed));

/*
 * Locations of kexec handover metadata
 */
struct kho_data {
	__u64 fdt_addr;
	__u64 fdt_size;
	__u64 scratch_addr;
	__u64 scratch_size;
} __attribute__((packed));

#endif /* __ASSEMBLER__ */

#endif /* _ASM_X86_SETUP_DATA_H */
