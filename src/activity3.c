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
#include<util/delay.h>
#include<avr/io.h>

/**
 * @brief Output with respect to analog input
 *
 * @param temperature
 */
int main(void)
{
 char OutPWM (uint16_t temperature)
  {
   char temp;

   if((temperature>=0) && (temperature<=209))
    {

        OCR1A = 205; //20% duty cycle
        temp = 20;
        _delay_ms(20);
    }
    else if((temperature>=210) && (temperature<=509))
    {

        OCR1A = 410; //40% duty cycle
        temp = 25;
       _delay_ms(20);
    }
    else if((temperature>=510) && (temperature<=709))
        {

        OCR1A = 717;//70% duty cycle
        temp = 29;
        _delay_ms(20);
        }
    else if((temperature>=710) && (temperature<=1024))
        {

        OCR1A = 973; //95% duty cycle
        temp = 33;
        _delay_ms(20);
        }
    else
        {
        OCR1A = 0; //0% output
        temp = 0;
        }
     return temp;
   }
return 0;
}

