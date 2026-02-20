#include <stdio.h>
#include <stdint.h>

int isprime(int n){
	
	int count = 0;
	
	if(n <= 1){
		
		count++;
		
	}
	
	else if (n == 2){
		
		count = 0;
		
	}
	
	else{
		
		for(int i = 3; i < n; i++){
			
			if(n % i == 0){
				
				count++;
				break;
				
			}
			
			else{
				
				continue;
				
			}
			
		}
		
	}
	
	return count;
	
}

int main(){
	
	int num = 0;
	
	printf("Enter number to check prime or not: ");
	scanf("%d", &num);
	
	int prime = isprime(num);
	
	if(prime >= 1){
		
		printf("The num = %d is not a prime", num);
		
	}
	
	else{
		
		printf("The num = %d is prime", num);
		
	}
	
	return 0;
	
}