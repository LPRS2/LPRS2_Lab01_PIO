

#include <stdint.h>
#include "system.h"


int main() {

	volatile uint8_t* sw = (volatile uint8_t*)SW_PIO_BASE;
	volatile uint8_t* led = (volatile uint8_t*)LED_PIO_BASE;

	while(1) { // Infinite loop.
		uint8_t x;
		// Reads SWs.
		x = *sw;

		// Writes LEDs.
		*led = x;
	}

	return 0;
}
