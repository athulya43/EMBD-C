
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
