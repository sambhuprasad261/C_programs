#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t byte_t;

uint32_t ByteExtract(uint32_t word, byte_t byte_num){
	
	byte_t Byte_Extract;
	
	Byte_Extract = (word >> 8*byte_num);
	
	return Byte_Extract;
	
	
}

uint32_t Word = 0x12345678;
byte_t Byte0, Byte1, Byte2, Byte3;

void main(void){
	
	Byte0 = ByteExtract(Word, 0);
	Byte1 = ByteExtract(Word, 1);
	Byte2 = ByteExtract(Word, 2);
	Byte3 = ByteExtract(Word, 3);
	
	printf("Byte0 =0x%x\n", Byte0);
	printf("Byte1 = 0x%x\n", Byte1);
	printf("Byte2 = 0x%x\n", Byte2);
	printf("Byte3 = 0x%x\n", Byte3);
	
	
}