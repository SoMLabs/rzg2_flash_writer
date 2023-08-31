/*

*/

#ifndef __YMODEM_H__
#define __YMODEM_H__

#include <stdint.h>
#include <stddef.h>

int32_t ymodem_receive_file (uint8_t * destination, size_t max_size);

#endif  /* ___YMODEM_H__ */
