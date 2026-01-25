#include <stdio.h>
#include <stdint.h>

uint8_t Nibble_Extract(uint32_t word, uint8_t bit_pos);
uint8_t Byte_Extract(uint32_t word, uint8_t bit_pos);
uint16_t Half_word_Extarct(uint32_t word, uint8_t bit_pos);

uint8_t Nibble_Extract(uint32_t word, uint8_t bit_pos){
	
	uint8_t nibble;
	
	nibble = (word >> 4*bit_pos) & 0xF;
	
	return nibble;
	
}

uint8_t Byte_Extract(uint32_t word, uint8_t bit_pos){
	
	uint8_t byte;
	
	byte = (word >> 8*bit_pos);
	
	return byte;
	
}

uint16_t Half_word_Extarct(uint32_t word, uint8_t bit_pos){
	
	uint16_t half_word;
	
	half_word = (word >> 16*bit_pos);
	
	return half_word;
	
}

uint32_t Word = 0xABCDEF12;

uint32_t Nibble0, Nibble1, Nibble2, Nibble3, Nibble4, Nibble5, Nibble6, Nibble7, Byte0, Byte1, Byte2, Byte3;
uint16_t half_word0, half_word1;

void main(void){
	
	printf("\n");
	printf("The Nibble of the word are: \n");
	printf("\n");
	Nibble0 = Nibble_Extract(Word, 0);
	Nibble1 = Nibble_Extract(Word, 1);
	Nibble2 = Nibble_Extract(Word, 2);
	Nibble3 = Nibble_Extract(Word, 3);
	Nibble4 = Nibble_Extract(Word, 4);
	Nibble5 = Nibble_Extract(Word, 5);
	Nibble6 = Nibble_Extract(Word, 6);
	Nibble7 = Nibble_Extract(Word, 7);
	
	printf("The Nibble0 of word 0x%X is 0x%X\n", Word, Nibble0);
	printf("The Nibble1 of word 0x%X is 0x%X\n", Word, Nibble1);
	printf("The Nibble2 of word 0x%X is 0x%X\n", Word, Nibble2);
	printf("The Nibble3 of word 0x%X is 0x%X\n", Word, Nibble3);
	printf("The Nibble4 of word 0x%X is 0x%X\n", Word, Nibble4);
	printf("The Nibble5 of word 0x%X is 0x%X\n", Word, Nibble5);
	printf("The Nibble6 of word 0x%X is 0x%X\n", Word, Nibble6);
	printf("The Nibble7 of word 0x%X is 0x%X\n", Word, Nibble7);
	printf("\n");
	
	printf("The Byte of a word are: \n");
	printf("\n");
	Byte0 = Byte_Extract(Word, 0);
	Byte1 = Byte_Extract(Word, 1);
	Byte2 = Byte_Extract(Word, 2);
	Byte3 = Byte_Extract(Word, 3);
	
	printf("The Byte0 of a word 0x%X is 0x%X\n", Word, Byte0);
	printf("The Byte1 of a word 0x%X is 0x%X\n", Word, Byte1);
	printf("The Byte2 of a word 0x%X is 0x%X\n", Word, Byte2);
	printf("The Byte3 of a word 0x%X is 0x%X\n", Word, Byte3);
	printf("\n");
	
	printf("The Halfword of a word are: \n");
	printf("\n");
	half_word0 = Half_word_Extarct(Word, 0);
	half_word1 = Half_word_Extarct(Word, 1);
	
	printf("The half_word0 of a word 0x%X is 0x%X\n", Word, half_word0);
	printf("The half_word1 of a word 0x%X is 0x%X\n", Word, half_word1);
	
}