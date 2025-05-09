/*
 * Copyright 2025, Cypress Semiconductor Corporation (an Infineon company)
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "whd.h"
#include "bus_protocols/whd_bus_protocol_interface.h"

#ifndef INCLUDED_M2M_WHD_BUS_PROTOCOL_H
#define INCLUDED_M2M_WHD_BUS_PROTOCOL_H

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************
*             Function declarations
******************************************************/
extern void whd_delayed_bus_release_schedule_update(whd_driver_t whd_driver, whd_bool_t is_scheduled);
#define DELAYED_BUS_RELEASE_SCHEDULE(whd_driver, schedule) \
    do {  whd_delayed_bus_release_schedule_update(whd_driver, schedule); } while (0)


/******************************************************
*             Global variables
******************************************************/


#ifdef __cplusplus
} /*extern "C" */
#endif

#endif /* ifndef INCLUDED_M2M_WHD_BUS_PROTOCOL_H */
