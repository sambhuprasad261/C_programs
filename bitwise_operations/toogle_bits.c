#include <stdio.h>
#include <stdint.h>

uint8_t d8 = 0xFF;
uint16_t d16 = 0xFFFF;
uint32_t d32 = 0xFFFFFFFF;

void main(void){
	
	d8 ^= (1 << 7) | (1 << 0);
	d16 ^= (1 << 15) | (1 << 0);
	d32 ^= (1 << 31) | (1 << 0);
	
	printf("d8 = 0x%X\n", d8);
	printf("d16 = 0x%X\n", d16);
	printf("d32 = 0x%X\n", d32);
	
	d8 ^= (1 << 7) | (1 << 0);
	d16 ^= (1 << 15) | (1 << 0);
	d32 ^= (1 << 31) | (1 <<0);
	
	printf("d8 = 0x%X\n", d8);
	printf("d16 = 0x%X\n", d16);
	printf("d32 = 0x%X\n", d32);
	
}