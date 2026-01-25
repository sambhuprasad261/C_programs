#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t bool_t;

bool_t getbitstatus(uint32_t word, bool_t bit_num){
	
	uint32_t bit_mask;
	bit_mask = (1 << bit_num);
	
	printf("bit_mask = %p\n", bit_mask);
	
	bool_t getstatus;
	getstatus = (word & bit_mask) ? 1 : 0;
	
	return getstatus;
	
}

uint32_t Word = 0xA0A0A0A0; // bit stream = 1010 0000 1010 0000 1010 0000 1010 0000

bool_t bit0, bit5, bit14, bit18, bit27, bit7;

void main (void){
	
	bit0 = getbitstatus(Word, 0);
	bit5 = getbitstatus(Word, 5);
	bit14 = getbitstatus(Word, 14);
	bit18 = getbitstatus(Word, 18);
	bit27 = getbitstatus(Word, 27);
	bit7 = getbitstatus(Word, 7);
	
	printf("Bit status for 0th is %u\n", bit0);
	printf("Bit status for 5th is %u\n", bit5);
	printf("Bit status for 14th is %u\n", bit14);
	printf("Bit status for 18th is %u\n", bit18);
	printf("Bit status for 27th is %u\n", bit27);
	printf("Bit status for 7th is %u\n", bit7);
	
}