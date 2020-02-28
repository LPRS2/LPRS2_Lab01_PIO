

#include <stdint.h>
#include "io.h"
#include "system.h"

volatile uint8_t* sw = SW_PIO_BASE;
volatile uint8_t* led = LED_PIO_BASE;

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
