#include "mbed.h"

DigitalOut myled(LED1);

int
main() {
    const double blink_duration = 0.05;
    const double blink_interval = 0.1;

    while(1) {
        myled = 1; // LED is ON
        wait(blink_duration);
        myled = 0; // LED is OFF
        wait(blink_interval);
    }
}
