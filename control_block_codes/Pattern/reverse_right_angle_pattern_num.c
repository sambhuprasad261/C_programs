#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		
		for(int j = 1; j <= 2*(n - i); j++){
			
			printf(" ");
			
		}
		
		for(int k = 1; k <= i; k++){
			
			//printf("%d ", k);
			printf("%d ", i);
			
		}
		
		printf("\n");
	}
	
	return 0;
}