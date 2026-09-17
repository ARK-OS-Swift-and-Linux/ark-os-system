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

/*
 * This file defines the USB charger type and state that are needed for
 * USB device APIs.
 */

#ifndef __LINUX_USB_CHARGER_H
#define __LINUX_USB_CHARGER_H

/*
 * USB charger type:
 * SDP (Standard Downstream Port)
 * DCP (Dedicated Charging Port)
 * CDP (Charging Downstream Port)
 * ACA (Accessory Charger Adapters)
 */
enum usb_charger_type {
	UNKNOWN_TYPE = 0,
	SDP_TYPE = 1,
	DCP_TYPE = 2,
	CDP_TYPE = 3,
	ACA_TYPE = 4,
};

/* USB charger state */
enum usb_charger_state {
	USB_CHARGER_DEFAULT = 0,
	USB_CHARGER_PRESENT = 1,
	USB_CHARGER_ABSENT = 2,
};

#endif /* __LINUX_USB_CHARGER_H */
