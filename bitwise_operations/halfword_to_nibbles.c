#include <stdio.h>
#include <stdint.h>

uint16_t halfword = 0x12AB;
uint8_t n1, n2, n3, n4;

void main(void){
	
	n1 = (halfword >> 4 * 0) & 0xF;
	n2 = (halfword >> 4 * 1) & 0xF;
	n3 = (halfword >> 4 * 2) & 0xF;
	n4 = (halfword >> 4 * 3) & 0xF;
	
	printf("The nbble0 of halfword is 0x%X\n", n1);
	printf("The nbble1 of halfword is 0x%X\n", n2);
	printf("The nbble2 of halfword is 0x%X\n", n3);
	printf("The nbble3 of halfword is 0x%X\n", n4);
	
}