#include <stdio.h>

void check_odd_even(int num){
	
	
	
	if(num % 2 == 0){
		
		printf("The number %d is even", num);
		
		return;
	}
	
	else{
		
		printf("The number %d is odd", num);
		
		return;
		
	}
	
}

int main(){
	
	int a;
	char ch;
	char inpc;
	char valid;
	 
	while(1){
		
		printf("Enter the number: ");
		
		if(scanf("%d", &a) == 1){
			
			check_odd_even(a);
			
			printf(" Do you want to use it again Y/N ?:");
			scanf(" %c", &valid);
			
			if(valid == 'y' || valid == 'Y'){
				
				continue;
				
			}
			
			else{
				
				return 1;
			}
			
		}
		else{
			
			printf("You Enter the invalid input try again or exit Y/N:");
			
			while(((ch = getchar()) != '\n') && (ch != EOF)){}
			
			scanf(" %c", &inpc);
			
			if(inpc == 'Y' || inpc == 'y'){
				
				continue;
				
			}
			
			else{
				
				printf("Fuck you");
				return 1;
				
			}
			
		}
	}
	
	return 0;
}