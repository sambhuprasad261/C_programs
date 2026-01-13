#include <stdio.h>

void natural_num(int num){
	
	int i = 0, sum = 0;
	
	while (i <= n){
		
		sum = sum + i;
		i++;
		
	}
	
	printf("The Sum of natural numbers is: %d", sum);
	
	return;
}

int main(){
	
	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	natural_num(n);
	
	return 0;
}