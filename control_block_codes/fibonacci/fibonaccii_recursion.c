#include <stdio.h>

void fiborecex(int n, int a, int b){
	
	int sum;
	
	if (n < 3){
		
		return;
		
	}
	
	else{
		
		sum = a + b;
		printf("%d, ", sum);
		
		return fiborecex(n - 1, b, sum);
		
	}
	
}

void fiborec(int num){
	
	if(num < 1){
		
		printf("Invalid Number");
		
	}
	
	else if(num == 1){
		
		printf("The fibonaci sequence is: %d", 0);
		
	}
	
	else if (num == 2){
		
		printf("The fibonacci sequence is: %d, %d", 0, 1);
		
	}
	
	else{
		
		printf("The fibonacci sequence is %d, %d, ", 0, 1);
		fiborecex(num, 0, 1);
		
	}
	
}

int main(){
	
	int n;
	printf("Enter the how many sequence of numbers that you want to know: ");
	scanf("%d", &n);
	
	fiborec(n);
	
	return 0;
}