#include <stdio.h>
#include <stdint.h>

typedef uint8_t bool_t;

bool_t check_bits(uint32_t word, bool_t bit){
	
	bool_t bit_extract;
	
	printf("word = %x, bit = %d\n", word, bit);
	
	bit_extract = word & (1 << bit) ? 1 : 0;
	printf("bit_extract = %x\n", bit_extract);
	
	return bit_extract;
	
}

uint32_t Word = 0xABCDEF12; // 1010 1011 1100 1101 1110 1111 0001 0010
bool_t MyBit0, MyBit4, MyBit8, MyBit12, MyBit17;

void main(void){
	
	MyBit0 = check_bits(Word, 0);
	MyBit4 = check_bits(Word, 4);
	MyBit8 = check_bits(Word, 8);
	MyBit12 = check_bits(Word, 12);
	MyBit17 = check_bits(Word, 17);
	
	printf("The bit extraction of Bit0 is %x\n", MyBit0);
	printf("The bit extraction of Bit4 is %x\n", MyBit4);
	printf("The bit extraction of Bit8 is %x\n", MyBit8);
	printf("The bit extraction of Bit12 is %x\n", MyBit12);
	printf("The bit extraction of Bit17 is %x\n", MyBit17);
	
}