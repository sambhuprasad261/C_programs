#include<stdio.h>

int main(){
	
	int a;
	printf("Enter the number:");
	scanf("%d", &a);
	
	if (a > 0){
		
		printf("The given number %d is a positive number", a);
		
	}
	
	else if(a == 0){
		
		printf("The given number %d is Zero ", a);
		
	}
	
	else if(a < 0){
		
		printf("The given number %d is a negative number", a);
		
	}
	
	else{
		
		printf("Invalid number check once");
		
	}
	
	return 0;
}