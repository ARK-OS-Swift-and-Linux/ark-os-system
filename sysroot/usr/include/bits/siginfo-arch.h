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

/* Architecture-specific adjustments to siginfo_t.  x86 version.  */
#ifndef _BITS_SIGINFO_ARCH_H
#define _BITS_SIGINFO_ARCH_H 1

#if defined __x86_64__ && __WORDSIZE == 32
/* si_utime and si_stime must be 4 byte aligned for x32 to match the
   kernel.  We align siginfo_t to 8 bytes so that si_utime and
   si_stime are actually aligned to 8 bytes since their offsets are
   multiple of 8 bytes.  Note: with some compilers, the alignment
   attribute would be ignored if it were put in __SI_CLOCK_T instead
   of encapsulated in a typedef.  */
typedef __clock_t __attribute__ ((__aligned__ (4))) __sigchld_clock_t;
# define __SI_ALIGNMENT __attribute__ ((__aligned__ (8)))
# define __SI_CLOCK_T __sigchld_clock_t
#endif

#endif
