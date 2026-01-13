#include<stdio.h>
#include<conio.h>

int star(int num){
	
	for(int i = 0; i < num; i = i + 1){
		
		for(int j = 0; j < num; j = j + 1){
			
			printf("* ");
		}
		
		printf("\n");
		
	}
	
	
}

int main(){
	int num = 5;
	
	star(num);
	
	return 0;
}