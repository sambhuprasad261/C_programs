#include <stdio.h>

int isprime(int num){
	
	int cnt = 0;
	
	if (num <= 1 || num > 2 && num % 2 == 0){
		
		cnt++;
		
	}
	
	else if (num == 2){
		
		return cnt;
		
	}
	
	else{
		
		for(int i = 3; i*i <= (num); i += 2){
			
			if (num % i == 0){
				
				cnt++;
				
			}
			
		}
		
	}
	
	return cnt;
	
}

int main(){
	
	int upper_limit = 0, lower_limit = 0, out = 0;
	
	printf("Enter the Lower limit: ");
	scanf("%d", &lower_limit);
	
	printf("Enter the upper_limit: ");
	scanf("%d", &upper_limit);
	
	if(upper_limit < 0 || lower_limit < 0){
		
		printf("DOn't give negative ranges");
		
	}
	
	else {
		
		printf("The prime number in these ranges are: ");
		
		for(int i = lower_limit; i <= upper_limit; i++ ){
			
			out = isprime(i);
			
			if(out > 0){
				
				continue;
				
			}
			
			else{
				
				printf("%d ", i);
				
			}
			
		}
		
	}
	
	return 0;
}