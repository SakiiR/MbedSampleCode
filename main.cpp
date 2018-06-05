#include "mbed.h"

DigitalOut myled(LED1);

int
main() {
    const int blink_duration = 2;
    const int blink_interval = 1;

    while(1) {
        myled = 1; // LED is ON
        wait(blink_duration);
        myled = 0; // LED is OFF
        wait(blink_interval);
    }
}
