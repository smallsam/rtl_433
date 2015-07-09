/**
 * Pulse demodulation functions
 * 
 * Binary demodulators (PWM/PPM/Manchester/...) using a pulse data structure as input
 *
 * Copyright (C) 2015 Tommy Vestermark
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef INCLUDE_PULSE_DEMOD_H_
#define INCLUDE_PULSE_DEMOD_H_

#include <stdint.h>
#include "pulse_detect.h"
#include "rtl_433.h"


/// Demodulate a Pulse Width Modulation signal
///
/// Demodulate a Pulse Width Modulation (PWM) signal consisting of short and long high pulses.
/// Gap between pulses may be of fixed size or variable (e.g. fixed period)
/// - Short pulse will add a 1 bit
/// - Long  pulse will add a 0 bit
/// @param start_bit = 0: Do not remove any startbits
/// @param start_bit = 1: First bit in each message is considered a startbit and not stored in bitbuffer
/// @return number of events processed
int pulse_demod_pwm(const pulse_data_t *pulses, struct protocol_state *device, int start_bit);


/// Demodulate a Manchester encoded signal with a hardcoded zerobit in front
///
/// Demodulate a Manchester encoded signal where first rising edge is counted as a databit 
/// and therefore always will be zero (Most likely a hardcoded Oregon Scientific peculiarity)
///
/// Clock is recovered from the data based on pulse width. When time since last bit is more 
/// than 1.5 times the clock half period (short_width) it is declared a data edge where:
/// - Rising edge means bit = 0
/// - Falling edge means bit = 1
/// @return number of events processed
int pulse_demod_manchester_zerobit(const pulse_data_t *pulses, struct protocol_state *device);


#endif /* INCLUDE_PULSE_DEMOD_H_ */