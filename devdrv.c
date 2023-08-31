/*
 * Copyright (c) 2015-2020, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "common.h"
#include "devdrv.h"
#include "scifdrv.h"

/************************
	PutChar		*
*************************/

int32_t PutChar(char outChar)
{
	PutCharSCIF0(outChar);
	return(0);
}

/************************
	GetChar		*
*************************/

int32_t GetChar(char *inChar)
{
	return GetCharSCIF0(inChar);
}

int32_t GetCharTimeout(char *inChar, uint32_t timeout_ms)
{
	return GetCharSCIF0Timeout(inChar, timeout_ms);
}

int32_t WaitPutCharSendEnd(void)
{
	WaitPutScif0SendEnd();
}
