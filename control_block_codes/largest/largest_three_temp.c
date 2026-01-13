#include <stdio.h>

void checklargest(int a, int b, int c){
	
	int temp;
	
	temp = a;
	
	if(temp < b){
		
		temp = b;
		
	}
	
	if (temp < c){
		
		temp = c;
		
	}
	
	printf("The largest is %d ", temp);
	
	
}

int main(){
	
	int a, b, c;
	
	printf("Enter value a:");
	scanf("%d", &a);
	
	printf("Enter value b:");
	scanf("%d", &b);
	
	printf("Enter value c:");
	scanf("%d", &c);
	
	checklargest(a, b, c);
	
	return 0;
}