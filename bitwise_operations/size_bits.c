#include <stdio.h>
#include <stdint.h>

void main(void){
	
	uint8_t Byte;
	uint16_t Half_word;
	uint32_t word;
	uint64_t double_word;
	
	printf("The Byte = %d\n", (8*sizeof(Byte) - 1));
	printf("The Halfword = %d\n", (8*sizeof(Half_word) - 1));
	printf("The word = %d\n", (8*sizeof(word) - 1));
	printf("The double word = %d\n", (8*sizeof(double_word) - 1));
	
}