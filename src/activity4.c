/**
 * @file act1.c
 * @author athulya43(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"activity4.h"

void USARTInit(uint16_t ubrr_value)
{

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

void USARTwriteChar(char c)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = c;
}
char USARTREADChar()
{
  while(!(UCSR0A&(1<<RXC0)))
  {
  }
  return 0;
}
