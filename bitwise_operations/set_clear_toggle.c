#include <stdio.h>
#include <stdint.h>
typedef uint8_t Byte_t;
typedef uint16_t HalfWord_t;
typedef uint32_t Word_t;

Word_t set_bit(Word_t word, Byte_t bit_pos);
Word_t clear_bit(Word_t word, Byte_t bit_pos);
Word_t toggle_bit(Word_t word, Byte_t bit_pos);

Word_t set_bit(Word_t word, Byte_t bit_pos){
	
	word = word | (1 << bit_pos);
	
	return word;
	
}

Byte_t issetbit(Word_t word, Byte_t bit_pos){
	
	if((word & (1 << bit_pos)))
		printf("the bit position %d is set\n", bit_pos);
	else
		printf("the bit position %d is not set\n", bit_pos);
	
}

Word_t clear_bit(Word_t word, Byte_t bit_pos){
	
	word = word & ~(1 << bit_pos);
	
	return word;
	
}

Byte_t isclearbit(Word_t word, Byte_t bit_pos){
	
	if(!(word & (1 << bit_pos)))
		printf("the bit position %d is clear\n", bit_pos);
	else
		printf("the bit position %d is not clear\n", bit_pos);
	
}

Word_t toggle_bit(Word_t word, Byte_t bit_pos){
	
	
	word = word ^ (1 << bit_pos);
	
	return word;
	
}

Byte_t istogglebit(Word_t word, Word_t new_word, Byte_t bit_pos){
	
	
	if((word ^ new_word) & (1 << bit_pos))
		printf("the bit position %d is toggle\n", bit_pos);
	else
		printf("the bit position %d is not toggle\n", bit_pos);
	
}


Word_t Word = 0x1234ABCD;

Word_t SetWord, ClearWord, ToggleWord;

void main(void){
	
	SetWord = set_bit(Word, 30); // 0001 --> 0101
	printf("The set bit position 30 of a word is 0x%X is 0x%X\n", Word, SetWord);
	issetbit(SetWord, 30);
	issetbit(ClearWord, 0);
	
	ClearWord = clear_bit(Word, 0);// 1101 --> 1100
	printf("The clear bit position 0 of a word is 0x%X is 0x%X\n", Word, ClearWord);
	isclearbit(ClearWord, 0);
	isclearbit(SetWord, 30);
	
	ToggleWord = toggle_bit(Word, 5);// 1100 --> 1110
	printf("The toggle bit position 5 of a word is 0x%X is 0x%X\n", Word, ToggleWord);
	istogglebit(Word, ToggleWord, 5);
	istogglebit(Word, Word, 5);

}