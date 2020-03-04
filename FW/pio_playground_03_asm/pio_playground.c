

#include <stdint.h>
#include "system.h"

#define sw ((volatile uint8_t*)0x10)
#define led ((volatile uint8_t*)LED_PIO_BASE)

int main() {

	while(1) { // Infinite loop.
		uint8_t x;
		// Reads SWs.
		x = *sw;

		// Writes LEDs.
		*led = x;
	}

	return 0;
}
