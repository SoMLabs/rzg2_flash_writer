/*
 * Copyright (c) 2015-2018, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __CPUDRV_H__
#define __CPUDRV_H__

void StartTMU0(uint32_t tenmSec);
void StartTMU0usec(uint32_t tenuSec);
void PowerOnTmu0(void);
void udelay(uint32_t tenuSec);

void Timer_Start(void);
uint32_t Timer_GetValue(void);
void Timer_Stop(void);

#endif /* __CPUDRV_H__ */
