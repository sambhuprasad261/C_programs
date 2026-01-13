#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter the Number: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < 2*(n - i - 1); j++){
			
			printf(" ");
			
		}
		
		for(int k = 0; k <= i; k++){
			
			//printf("%c ", 'A' + k);
			printf("%c ", 'A' + i);
			
		}
		
		printf("\n");
		
	}
	return 0;
}