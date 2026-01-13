#include <stdio.h>

unsigned int factorial(unsigned int n){
	
	if( n <= 1 ){
		
		return n;
		
	}
	else{
		
		return n * factorial(n - 1);
		
	}
	
}

int main(){
	
	unsigned int num;
	unsigned long int fact;
	printf("Enter the factorial number: ");
	scanf("%u", &num);
	
	//debug
	
	printf("Before getting into recursion num = %u\n", num);
	
	fact = factorial(num);
	
	printf("The factorial of the number %u is %lu", num, fact);
	
	return 0;
}