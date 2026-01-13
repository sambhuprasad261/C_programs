#include <stdio.h>

void checknum(int num){
	
	if(num == 0){
		
		printf("The number you enter %d is zero number\n", num);
		
		return;
	}
	
	
	int msb = num & (1<<(sizeof(int)*8 - 1));
	
	if (msb == 0){
		
		printf("The number you enter %d is positive number\n", num);
		
	}
	else{
		
		printf("The number you enter %d is negative number\n", num);
		
	}
	
}

int main(){
	
	int a;
	printf("Enter any number:");
	
	if(scanf("%d", &a) != 1){
		
		printf("You need to enter only Integer");
		
		return 1;
		
	}
	
	checknum(a);
	
	return 0;
}