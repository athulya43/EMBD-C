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
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include<avr/io.h>
#include<util/delay.h>

uint16_t temperature;
initADC();
char temp;

int main(void)
{
  while(1)
  {
    temp=ReadADC(0);
    _delay_ms(10);
  }
  return 0;
}
