#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		
		for(int j = 1; j <= i; j++){
			
			//printf("%d", j);//column number(vertical)
			printf("%d", i);//row printing numbers(horizontal)
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}