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

#ifndef _ASM_GENERIC_HUGETLB_ENCODE_H_
#define _ASM_GENERIC_HUGETLB_ENCODE_H_

/*
 * Several system calls take a flag to request "hugetlb" huge pages.
 * Without further specification, these system calls will use the
 * system's default huge page size.  If a system supports multiple
 * huge page sizes, the desired huge page size can be specified in
 * bits [26:31] of the flag arguments.  The value in these 6 bits
 * will encode the log2 of the huge page size.
 *
 * The following definitions are associated with this huge page size
 * encoding in flag arguments.  System call specific header files
 * that use this encoding should include this file.  They can then
 * provide definitions based on these with their own specific prefix.
 * for example:
 * #define MAP_HUGE_SHIFT HUGETLB_FLAG_ENCODE_SHIFT
 */

#define HUGETLB_FLAG_ENCODE_SHIFT	26
#define HUGETLB_FLAG_ENCODE_MASK	0x3f

#define HUGETLB_FLAG_ENCODE_16KB	(14U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_64KB	(16U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_512KB	(19U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_1MB		(20U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_2MB		(21U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_8MB		(23U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_16MB	(24U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_32MB	(25U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_256MB	(28U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_512MB	(29U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_1GB		(30U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_2GB		(31U << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_16GB	(34U << HUGETLB_FLAG_ENCODE_SHIFT)

#endif /* _ASM_GENERIC_HUGETLB_ENCODE_H_ */
