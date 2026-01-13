#include <stdio.h>

int main(){
	
	int test = 0;
	char *bytes = (char *) & test;
	*bytes = 0x01;
	printf("The value is %p\n", *bytes);
	printf("Byte Order: ");
	
	if (test == 1){
		
		printf("Little ");
		
	}
	
	else{
		
		printf("Big ");
		
	}
	
	printf("Endian.\n");
	
	return 0;
}