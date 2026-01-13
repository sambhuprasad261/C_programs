#include <stdio.h>

int reversenum(int n){
	
	int rev_num = 0;
	
	while(n > 0){
		
		rev_num = (rev_num * 10) + (n % 10);
		n = n / 10;
		
	}
	
	return rev_num;
	
}

int main(){
	
	int num;
	
	int out;
	
	printf("Enter any positive number to reverse: ");
	scanf("%d", &num);
	
	//printf("num = %d", num);
	
	out = reversenum(num);
	
	printf("The reverse of number = %d is %d", num, out);
	
	return 0;
	
}