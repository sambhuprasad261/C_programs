#include<stdio.h>

void checkcomposite(int p, int q, int r){
	
	if(p >= q && p >= r ){
		
		printf("The number a = %d is largest among those two b = %d, c = %d", p, q, r);
		
	}
	
	else if(q >= p && q >= r){
		
		printf("The number b = %d is largest among those two a = %d, c = %d", q, p, r);
		
	}
	
	else{
		
		printf("The number c = %d is largest among those two a = %d, b = %d", r, p, q);
		
	}
	
	
}

int main(){
	
	int a, b, c;
	
	printf("Enter the value a:");
	scanf("%d", &a);
	
	printf("Enter the value b:");
	scanf("%d", &b);
	
	printf("Enter the value c:");
	scanf("%d", &c);
	
	checkcomposite(a,b,c);
	
	return 0;
}