#include <stdio.h>
#include <math.h>

int isprime(int n){
	
	int count = 0;
	
	if(n <= i){
		
		count++
		
	}
	
	else if(n == 2){
		
		count = 0;
		
	}
	
	else{
		
		for(int i = 0; i < sqrt(n); i++){
			
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
	
	printf("Enter the prime number to check: ");
	scanf("%d", &num);
	
	int prime = isprime(num);
	
	if(count >= 1){
		
		printf("The num = %d is not a prime number", num);
		
	}
	
	else{
		
		printf("The num = %d is a prime number", num);
		
	}
	
	return 0;
	
}