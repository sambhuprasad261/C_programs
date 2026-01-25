#include <stdio.h>
#include <stdint.h>

uint16_t combine_half_word(uint8_t byte0, uint8_t byte1);

uint16_t combine_half_word(uint8_t byte0, uint8_t byte1){
	
	uint16_t half_word;
	
	half_word = (byte1 << 8*1) | (byte0 << 8*0);
	
	return half_word;
	
}

uint16_t Half_word0, Half_word1;

void main(void){
	
	Half_word0 = combine_half_word(0xAB, 0xCD);
	Half_word1 = combine_half_word(0x12, 0x34);
	
	printf("The Half_word is 0x%X\n", Half_word0);
	printf("The Half_word is 0x%X\n", Half_word1);
	
}