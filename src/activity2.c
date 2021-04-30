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
#include <avr/io.h>
int main(void)
{
  void initADC()
   {
    ADMUX |= (1<<REFS0);   // for Aref = AVcc
    ADCSRA |= (1<<ADEN)|(7<<ADPS0); //enable ADC and set prescalar to 128
   }

    uint16_t Read_TEMP(uint8_t ch)
  {
    // Select ADC channel ch must be 0-7
    ADMUX&=0xf8; // clear the 3 LSBs for channel
    ch&=0b00000111;
    ADMUX|=ch;
    // Start Single conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA&(1<<ADIF)));
    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
  }
 return 0;
}

