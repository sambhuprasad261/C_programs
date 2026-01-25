#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t nibbleExtraction(uint32_t word, uint8_t nibble_num){
	
	uint8_t nibble;
	
	nibble = (word >> 4 * nibble_num) & 0xF;
	
	return nibble;
	
}

uint32_t word = 0x12345678;

uint8_t myNib0, myNib1, myNib2, myNib3, myNib4, myNib5, myNib6, myNib7;

void main(void){
	
	myNib0 = nibbleExtraction(word, 0);
	myNib1 = nibbleExtraction(word, 1);
	myNib2 = nibbleExtraction(word, 2);
	myNib3 = nibbleExtraction(word, 3);
	myNib4 = nibbleExtraction(word, 4);
	myNib5 = nibbleExtraction(word, 5);
	myNib6 = nibbleExtraction(word, 6);
	myNib7 = nibbleExtraction(word, 7);
	
	printf("The Nibble Extraction 0th nibble is %x\n", myNib0);
	printf("The Nibble Extraction 1th nibble is %x\n", myNib1);
	printf("The Nibble Extraction 2th nibble is %x\n", myNib2);
	printf("The Nibble Extraction 3th nibble is %x\n", myNib3);
	printf("The Nibble Extraction 4th nibble is %x\n", myNib4);
	printf("The Nibble Extraction 5th nibble is %x\n", myNib5);
	printf("The Nibble Extraction 6th nibble is %x\n", myNib6);
	printf("The Nibble Extraction 7th nibble is %x\n", myNib7);
	
}