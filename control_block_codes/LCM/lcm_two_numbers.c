#include <stdio.h>

int main(){
	
	int a = 10, b = 5;
	int max;
	int boo = 1;
	
	max = a >= b ? a : b;
	
	while (boo == 1){
		
		if(max % a == 0 && max % b == 0){
			
			printf("The LCM of two numbers %d, %d is %d", a, b, max);
			boo = 0;
			
		}
		
		else{
			
			max ++;
			boo = 1;
			
		}
		
	}
	
	return 0;
}