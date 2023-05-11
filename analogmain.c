#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"
#include <stdio.h>

#define ANALOG_PIN 0
void mainanalog()
{
    init_serial();
    while(1) {
        uint16_t analog_value = analogRead(ANALOG_PIN);
        //Tal mellan 0 och 1024
//        float voltage = (analog_value * .00488);
        printf("Pin: %u Value: %u \n",\
        ANALOG_PIN, analog_value);
        _delay_ms(1000);
    }
}