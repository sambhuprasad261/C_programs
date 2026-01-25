#include <stdio.h>
#include <stdint.h>

uint8_t d1 = 0x55;
uint16_t d2 = 0x5555;
uint32_t d3 = 0x55555555;

void main(void){
	
	d1 = ~d1;
	d2 = ~d2;
	d3 = ~d3;
	
	printf("d1 = 0x%X\n", d1);
	printf("d2 = 0x%X\n", d2);
	printf("d3 = 0x%X\n", d3);
	
}