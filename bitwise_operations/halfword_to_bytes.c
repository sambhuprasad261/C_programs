#include <stdio.h>
#include <stdint.h>

uint16_t halfword = 0xAB12;
uint8_t byte0, byte1;

void main(void){
	
	byte0 = halfword >> 8 * 0;
	byte1 = halfword >> 8 * 1;
	
	printf("Byte0 of halfword is 0x%X\n", byte0);
	printf("Byte1 of halfword is 0x%X\n", byte1);
	
}