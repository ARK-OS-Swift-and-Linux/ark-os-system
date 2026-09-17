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
#ifndef _LINUX_SOUND_H
#define _LINUX_SOUND_H

/*
 * Minor numbers for the sound driver.
 */

#include <linux/fs.h>

#define SND_DEV_CTL		0	/* Control port /dev/mixer */
#define SND_DEV_SEQ		1	/* Sequencer output /dev/sequencer (FM
						synthesizer and MIDI output) */
#define SND_DEV_MIDIN		2	/* Raw midi access */
#define SND_DEV_DSP		3	/* Digitized voice /dev/dsp */
#define SND_DEV_AUDIO		4	/* Sparc compatible /dev/audio */
#define SND_DEV_DSP16		5	/* Like /dev/dsp but 16 bits/sample */
/* #define SND_DEV_STATUS	6 */	/* /dev/sndstat (obsolete) */
#define SND_DEV_UNUSED		6
#define SND_DEV_AWFM		7	/* Reserved */
#define SND_DEV_SEQ2		8	/* /dev/sequencer, level 2 interface */
/* #define SND_DEV_SNDPROC	9 */	/* /dev/sndproc for programmable devices (not used) */
/* #define SND_DEV_DMMIDI	9 */
#define SND_DEV_SYNTH		9	/* Raw synth access /dev/synth (same as /dev/dmfm) */
#define SND_DEV_DMFM		10	/* Raw synth access /dev/dmfm */
#define SND_DEV_UNKNOWN11	11
#define SND_DEV_ADSP		12	/* Like /dev/dsp (obsolete) */
#define SND_DEV_AMIDI		13	/* Like /dev/midi (obsolete) */
#define SND_DEV_ADMMIDI		14	/* Like /dev/dmmidi (onsolete) */


#endif /* _LINUX_SOUND_H */
