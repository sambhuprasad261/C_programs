#include <stdio.h>

int fiborec(int n){
	
	if( n == 0 ){
		
		return 0;
		
	}
	
	else if ( n == 1 ){
		
		return 1;
		
	}
	
	else{
		
		return fiborec(n - 2) + fiborec(n - 1);
		
	}
	
}

int arrfibo(num){
	
	int arr = {};
	int val;
	
	for(int j = 0; j < num; num++){
		
		val = fiborec(num);
		arr[j] = val;
		
	}
	
	return arr;
	
}

int main(){
	
	int num;
	int i;
	
	printf("The fibonacci series that you want to print: ");
	scanf("%d", &num);
	
	for(i = num; i < 0; num--){
		
		int value = fiborec(num);
		printf("The fibonacci series is %d", value);
		
	}
	
}