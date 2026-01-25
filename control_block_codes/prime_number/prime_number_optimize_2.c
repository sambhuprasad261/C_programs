#include <stdio.h>

int isprime(int num){
	
	int cnt = 0;
	
	if(num <= 1 || num > 2 && num % 2 == 0){
		
		cnt++;
		
	}
	
	else if (num == 2){
		
		return cnt;
		
	}
	
	else{
		
		for(int i = 3; i * i <= num / i; i += 2){
			
			if(num % i == 0){
				
				cnt++;
				break;
				
			}
			
		}
		
	}
	
	return cnt;
	
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
		
		if(out > 0){
			
			printf("Given number %d is not a prime number", n);
			
		}
		
		else{
			
			printf("Given number %d is a prime number", n);
			
		}
		
	}
	
	return 0;
}