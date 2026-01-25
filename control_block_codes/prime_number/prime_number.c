#include <stdio.h>

int isprime(int num){
	
	if(num == 0 || num == 1){
		
		return 0;
		
	}
	
	else{
		for(int i = 2; i < num; i++){
			
			if(num % i == 0){
				return 0;
			}
			else
				continue;
		}
	}
	
	return 1;
}

int main(){
	
	int n = 0, out = 0;
	
	printf("Enter the number to check prime or not: ");
	scanf("%d", &n);
	
	if(n < 0){
		printf("Don't enter negative values");
	}
	
	else{
		
		out = isprime(n);
		
		if(out == 1)
			printf("The given number %d is prime number", n);
		else
			printf("The given number %d is not a prime number", n);
	}
	
	return 0;
}