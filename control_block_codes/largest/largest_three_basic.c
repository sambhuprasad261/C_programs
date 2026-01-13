#include <stdio.h>

void checklargest(int p, int q, int r){
	
	if(p > q){
		
		if(p > r){
			
			printf("The %d is largest among those two elements %d, %d", p, q, r);
		}
		
		else{
			
			printf("The %d is the largest among those two elements %d %d", r, p, q);
		}
		
	}
	
	else if ( q > r ){
		
		printf("The %d is the largest among those two elements %d %d", q, p, r);
	}
	
	else{
		
		printf("The %d is the largest among those two elements %d %d", r, p, q);
	}
	
}

int main(){
	
	int a, b, c;
	printf("Enter the number a:");
	scanf("%d", &a);
	
	printf("Enter the number b:");
	scanf("%d", &b);
	
	printf("Enter the number c:");
	scanf("%d", &c);
	
	checklargest(a, b, c);
	
	return 0;
}