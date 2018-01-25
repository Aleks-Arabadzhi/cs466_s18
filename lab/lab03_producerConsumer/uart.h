#ifndef _UART_H_INCLUDED_
#define _UART_H_INCLUDED_

void uartSetup(void);
void uartStringPut(const char *s);
void uartUint32Put(uint32_t value);

#endif //  _UART_H_INCLUDED_
