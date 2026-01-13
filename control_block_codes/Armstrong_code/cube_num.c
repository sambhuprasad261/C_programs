#include <stdio.h>

int main(){
	
	int num = 2;
	int rem = 1;
	
	for(int i = 0; i < 5; i++){
		
		rem = rem * num;
		
	}
	
	printf("Rem = %d", rem);
	
	return 0;
}