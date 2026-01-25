#include <stdio.h>
#include <stdint.h>

uint8_t Byte = 0xAB;

void main(void){
	
	uint8_t n1, n2;
	
	n1 = (Byte >> 4 * 0) & 0xF;
	n2 = (Byte >> 4 * 1) & 0xF;
	
	printf("n1 = 0x%X\n", n1);
	printf("n2 = 0x%X\n", n2);
	
}