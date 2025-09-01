#include <stdio.h>

#include "pico/stdlib.h"

int main() {
	stdio_init_all();
	printf("hello, world!\n");

	while(1) {
		printf("tick\n");
		sleep_ms(1000);
	}
}
