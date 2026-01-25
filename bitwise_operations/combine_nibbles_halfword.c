#include <stdio.h>
#include <stdint.h>

uint8_t d1 = 0xA, d2 = 0xB, d3 = 0xC, d4 = 0xD;

void main(void){
	
	uint16_t halfword;
	
	halfword = (d1 << 4 * 0) | (d2 << 4 * 1) | (d3 << 4 * 2) | (d4 << 4 * 3);
	
	printf("Half word by combine 4 nibbles is 0x%X\n", halfword);
	
}