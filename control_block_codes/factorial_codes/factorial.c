#include <stdio.h>

int main(){
	
	unsigned int fact = 1;
	unsigned int num = 0;
	unsigned int i;
	
	printf("Enter Number to know the factorial:");
	scanf("%u", &num);
	
	//debug
	printf("before loop num = %u\n", num);
	printf("before loop fact = %u\n", fact);
	
	for(i = num; i > 0; i--){
		
		fact = fact * i;
		
		printf("after loop num = %u\n", i);
		printf("after loop fact = %u\n", fact);
		
	}
	
	printf("The factorial of number %d is %u\n", num, fact);
	
	return 0;
}