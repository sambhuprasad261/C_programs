#include <stdio.h>
#include <stdint.h>

uint8_t d81 = 0xAB, d82 = 0xCD, d83 = 0xEF, d84 = 0x12;

void main(void){
	
	uint32_t word;
	
	word = (d81 << 8 * 0) | (d82 << 8 * 1) | (d83 << 8 * 2) | (d84 << 8 * 3);
	
	printf("Combined bytes to word is 0x%X\n", word);
	
}