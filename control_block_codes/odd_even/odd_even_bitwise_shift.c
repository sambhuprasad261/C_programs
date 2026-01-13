#include<stdio.h>

void checkoddeven(int num){
	
	int temp = num;
	temp = temp >> 1;
	temp = temp << 1;
	
	if(temp == num){
		
		printf("The number %d is Even", num);
	}
	
	else{
		
		printf("The number %d is odd", num);
	}
	
}

int main(){
	
	int a;
	printf("Enter the Number:");
	scanf("%d", &a);
	
	checkoddeven(a);
	
	return 0;
}