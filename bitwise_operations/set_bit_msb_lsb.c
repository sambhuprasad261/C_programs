#include <stdio.h>
#include <stdint.h>


void main(void){
	
	uint8_t d8 = 0xFF;
	uint16_t d16 = 0xFFFF;
	uint32_t d32 = 0xFFFFFFFF;
	
	d8 &= ~((1 << 0) | (1 << 7));
	d16 &= ~((1 << 0) | (1 << 15));
	d32 &= ~((1 << 0) | (1 << 31));;
	
	printf("The Set bit of LSB and MSB to zero of d8 = 0x%X\n", d8);
	printf("The Set bit of LSB and MSB to zero of d16 = 0x%X\n", d16);
	printf("The Set bit of LSB and MSB to zero of d32 = 0x%X\n", d32);
	
}