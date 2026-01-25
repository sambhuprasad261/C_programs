#include <stdio.h>

int isprime(int n){
	
	int cnt = 0;
	
	if(n <= 1 || n > 2 && n % 2 == 0){
		
		printf("1st cnt = %d\n", cnt);
		cnt++;
		
		
	}
	
	else if (n == 2){
		
		printf("2nd cnt = %d\n", cnt);
		return cnt;
		
	}
	
	else {
		
		for(int i = 3; i * i <= n / i; i += 2){
			
			if (n % i == 0){
				cnt++;
				break;
			}
			
		}
		printf("3rd cnt = %d\n", cnt);
		
	}
	
	printf("outside cnt = %d\n", cnt);
	
	return cnt;
	
}

int main(){
	
	int n = 0, out = 0;
	
	printf("Enter number to check the number is prime or not: ");
	scanf("%d", &n);
	
	if (n < 0)
		printf("Don't enter the negative numbers");
	
	else{
		
		out = isprime(n);
		
		printf("out = %d\n", out);
		
		if(out > 0){
			
			printf("The given number %d not a prime number", n);
			
		}
		
		else
			printf("The given number %d a prime number", n);
		
	}	
	
	return 0;
}