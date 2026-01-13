#include <stdio.h>

int checklargest(int a, int b){
	
	return (a >= b) ? a : b;
	
}

int main(){
	
	int a, b, c;
	
	printf("Enter value a:");
	scanf("%d", &a);
	
	printf("Enter value b:");
	scanf("%d", &b);
	
	printf("Enter value c:");
	scanf("%d", &c);
	
	int max = checklargest(max(a,b), c);
	
	printf("The largest is %d", max);
	
	return 0;
}