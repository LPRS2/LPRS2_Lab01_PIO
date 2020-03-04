

#include <stdint.h>
#include "io.h"
#include "system.h"


int main() {

	while(1) { // Infinite loop.
		uint8_t x;
		// Reads SWs.
		x = IORD(SW_PIO_BASE, 0);

		// Writes LEDs.
		IOWR(LED_PIO_BASE, 0, x);

	}

	return 0;
}
