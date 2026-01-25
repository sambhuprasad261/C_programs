#include <stdio.h>
#include <stdint.h>

uint8_t d1 = 0xA, d2 = 0xB;

void main(void){
	
	uint8_t Byte;
	
	Byte = (d1 << 4 * 0) | (d2 << 4 * 1);
	
	printf("The Byte by combine two nibble is 0x%X\n", Byte);
	
}