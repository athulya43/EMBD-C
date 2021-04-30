#include <avr/io.h>

#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED


void initADC();

/** \brief Reads the temperature to a channel on MCU
 *
 * \param ch is the channel number in which the conversion takes place
 * \param
 * \return It returns a 16 bit number
 *
 */

uint16_t Read_TEMP(uint8_t ch);

#endif // ACTIVITY2_H_INCLUDED
