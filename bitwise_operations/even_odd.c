#include <stdio.h>
#include <stdint.h>

typedef uint8_t bool_t;

bool_t even_odd_modulo (uint32_t num);
bool_t even_odd_bitwise (uint32_t num2);

bool_t even_odd_modulo (uint32_t num){
	
	bool_t rem = num % 2;
	
	bool_t bit_status = 1;
	
	if (0 == rem){
		
		bit_status = 0;
		
	}
	
	else{
		
		bit_status = 1;
		
	}
	
	return bit_status;
	
}

bool_t even_odd_bitwise(uint32_t num2){
	
	bool_t bit_status = 1;
	bool_t rem = num2 & (1 << 0);
	
	//printf("The rem = %x\n", rem);
	
	if(0 == rem){
		
		bit_status = 0;
		
	}
	else{
		
		bit_status = 1;
		
	}
	
	return bit_status;
}

uint32_t sample1 = 14, sample2 = 13;

uint32_t main(void){
	
	bool_t status1, status2;
	
	status1 = even_odd_modulo(sample1);
	status2 = even_odd_bitwise(sample2);
	
	if(status1 == 1){
		
		printf("The %d is odd number\n", sample1);
		
	}
	
	else{
		
		printf("The %d is even number\n", sample1);
		
	}
	
	if(status2 == 1){
		
		printf("The %d is odd number\n", sample2);
		
	}
	
	else{
		
		printf("The %d is even number\n", sample2);
		
	}
	
}