#include <stdio.h>
#include <stdint.h>

uint32_t word_array(uint8_t *array);

uint32_t word_array(uint8_t *array){
	
	uint32_t word = 0;
	
	for(int i = 0; i < 4; i++){
		
		//printf("word = %X", word);
		word = word | (array[i] << (8 * i));
		
	}
	
	return word;
}

uint8_t Array[4] = {0xAB, 0xCD, 0xEF, 0x12};

void main(void){
	
	uint32_t Word = word_array(Array);
	
	printf("The Word of 4 Bytes is 0x%8X", Word);
	
}