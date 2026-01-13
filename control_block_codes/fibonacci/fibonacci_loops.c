#include <stdio.h>

int main(){
	
	int a = 0;
	int b = 1;
	int i;
	int n;
	int temp;
	
	printf("How many sequence that you want: ");
	scanf("%d", &n);
	
	printf("The fibonacci sequence is: %d, %d, ", a, b);
	
	for(i = 2; i < n; i++){
		
		temp = a + b;
		a = b;
		b = temp;
		printf("%d, ", temp);
		
	}

	return 0;
}