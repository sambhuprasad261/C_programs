#include <stdio.h>

void natural_num(int n){
	
	int sum = 0;
	
	for(int i = 0; i <= n; i++){
		
		sum = sum + i;
		
	}
	
	printf("The sum of natural numbers is: %d", sum);
	
	return;
}

int main(){
	
	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	natural_num(n);
	
	return 0;
}