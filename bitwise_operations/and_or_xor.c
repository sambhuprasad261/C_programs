#include <stdio.h>
#include <stdint.h>

uint8_t a = 0x55;
uint8_t b = 0xAA;

uint16_t c = 0x5555;
uint16_t d = 0xAAAA;

uint16_t and16, or16, xor16;
uint8_t and8, or8, xor8;

void main(void){
	
	and8 = a & b;
	or8 = a | b;
	xor8 = a ^ b;
	
	and16 = c & d;
	or16 = c | d;
	xor16 = c ^ d;
	
	printf("OR of 8 bits is %x\n", or8);
	printf("AND of 8 bits is %x\n", and8);
	printf("XOR of 8 bits is %x\n", xor8);
	
	printf("OR of 16 bits is %x\n", or16);
	printf("AND of 16 bits is %x\n", and16);
	printf("XOR of 16 bits is %x\n", xor16);

	
}