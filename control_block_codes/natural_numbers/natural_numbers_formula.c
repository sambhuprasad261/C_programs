#include <stdio.h>

void natural_num(int num){
	
	printf("The sum of natural numbers is: %d", (num * (( num + 1 )) /2 ));
	
}

int main(){
	
	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	natural_num(n);
	
	return 0;
}