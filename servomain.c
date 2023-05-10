#include <avr/io.h>
#include <util/delay.h>
#include  "servo.h"

void mainservo()
{
    init_servo();
    while(1)
    {
        servo1_set_percentage(100);
        _delay_ms(1000);
 
        servo1_set_percentage(-100);
        _delay_ms(1000);
    }
}