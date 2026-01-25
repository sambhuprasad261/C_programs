#include <stdio.h>
#include <stdint.h>

int32_t nd = -4;

uint32_t pd = 4;

void main(void){
	
	uint32_t two_compilment;
	
	two_compilment = (~pd) + 1;
	
	printf("The negative decimal = %x\n", nd);
	printf("The two compliment is %x\n", two_compilment);
	
}