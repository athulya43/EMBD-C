#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
    DDRB|=(1<<PB0);//Set B0=1 for led
    DDRB&=~(1<<PB1);// clear bit
    PORTB|=(1<<PB1);//set bit
    DDRB&=~(1<<PB2);//clear bit
    PORTB|=(1<<PB2);//set bit

    while(1)
    {
       if(!(PINB&(1<<PB1)))
        {
            if(!(PINB&(1<<PB2)))
            {
                 PORTB|=(1<<PB0);//passenger and heater button indication
                 _delay_ms(500);
            }


              else
            {
                PORTB&=~(1<<PB0);
                _delay_ms(500);
            }

        }
    }
      return 0;
}

