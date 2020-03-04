

#include <stdint.h>
#include "system.h"


int main() {

	register volatile uint32_t* sw = (volatile uint32_t*)SW_PIO_BASE;
	register volatile uint32_t* led = (volatile uint32_t*)LED_PIO_BASE;
	register uint32_t x;

	while(1) { // Infinite loop.
		// Reads SWs.
		x = *sw;

		// Writes LEDs.
		*led = x;
	}

	return 0;
}
