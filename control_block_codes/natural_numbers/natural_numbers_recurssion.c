#include <stdio.h>

int natural_num(int num){
	
	if( num > 0){

		return (num + natural_num(num - 1));
		
	}
	
}

int main(){
	
	int n;
	int out = 0;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	out = natural_num(n);
	
	printf("The sum of natural numbers is: %d", out);
	
	return 0;
}