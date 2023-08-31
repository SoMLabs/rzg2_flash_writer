/*
 * Copyright (c) 2015-2016, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __DEVDRV_H__
#define __DEVDRV_H__

int32_t PutChar(char outChar);
int32_t GetChar(char *inChar);
int32_t GetCharTimeout(char *inChar, uint32_t timeout_ms);
int32_t WaitPutCharSendEnd(void);

#endif /* __DEVDRV_H__ */
