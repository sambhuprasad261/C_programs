#include <stdio.h>
#include <stdint.h>

uint16_t combine_halfword(uint8_t byte0, uint8_t byte1);
//uint16_t combine_halfword(char byte0, char byte1); 
//[Note:- Even you use the char the result will depend on the signed or unsigned char not the char always used as character]
// Use uint8_t (or unsigned char) for predictable bitwise shifts.
uint32_t combine_word(uint16_t halfword0, uint16_t halfword1);

uint16_t combine_halfword(uint8_t byte0, uint8_t byte1){
//uint16_t combine_halfword(char byte0, char byte1){ 
	
	uint16_t halfword;
	
	halfword = (byte1 << 8) | (byte0 << 0);
	
	return halfword;
	
}

uint32_t combine_word(uint16_t halfword0, uint16_t halfword1){
	
	uint32_t word;
	
	word = (halfword1 << 16) | (halfword0 << 0);
	
	return word;
	
}



uint16_t MyHalfword0, MyHalfword1;
uint32_t Myword2, Myword1, Myword0;


void main (void){
	
	MyHalfword0 = combine_halfword(0x12, 0x34);
	MyHalfword1 = combine_halfword(0x56, 0x78);
	
	printf("The Combine Half word of two bytes is 0x%x\n", MyHalfword0);
	printf("The Combine Half word of two bytes is 0x%x\n", MyHalfword1);
	
	Myword0 = combine_word(0x1357, 0x2468);
	Myword1 = combine_word(0x2357, 0x9ACE);
	
	printf("The Combine word of two half word is 0x%X\n", Myword0);
	printf("The Combine word of two half word is 0x%X\n", Myword1);
	
	Myword2 = combine_word(MyHalfword0, MyHalfword1);
	
	printf("The Combine word of two half word of previous one is 0x%X", Myword2);
	
	
}