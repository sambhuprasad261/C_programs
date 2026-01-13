#include <stdio.h>

int palindromenum(int n){
	
	int out = 0;
	
	int temp = n;
	
	while (n > 0){
		
		out = out*10 + n %10;
		n = n/10;
		
	}
	
	//printf("out = %d", out);
	
	if(out == temp)
		return 1;
	else
		return 0;
	
}

int main(){
	
	int num;
	int ispali;
	
	printf("Enter the number to check palindrome or not: ");
	scanf("%d", &num);
	
	ispali = palindromenum(num);
	
	if(ispali == 1){
		
		printf("The number %d is a plaindrome number", num);
		
	}
	
	else if(ispali == 0){
		
		printf("The number %d is not a plaindrome number", num);
		
	}
	
	else{
		
		printf("invalid input please check the number you entered");
		
	}
	
	return 0;
}