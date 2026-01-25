#include <stdio.h>
#include <stdint.h>

uint32_t word = 0xABCD1234;
uint8_t d1, d2, d3, d4;

void main(void){
	
	d1 = (word >> 8 * 0);
	d2 = (word >> 8 * 1);
	d3 = (word >> 8 * 2);
	d4 = (word >> 8 * 3);
	
	printf("d1 = 0x%X\n", d1);
	printf("d2 = 0x%X\n", d2);
	printf("d3 = 0x%X\n", d3);
	printf("d4 = 0x%X\n", d4);
	
}