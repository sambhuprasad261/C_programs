#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char arr[] = "saippuakivikauppia";
	//char str[] = "";
	int is_palindrome = 1;
	
	//int count = 0;
	
	int n = (sizeof(arr) / sizeof(arr[0])) - 1;
	char str[n + 1];
	
	for(int i = 0; i < n; i++){
		
		//printf("itteration = %d\n", count);
		//printf("arr = %c\n", arr[i]);
		//printf("in loop str = %c\n", str[i]);
		str[i] = arr[n - 1 - i];
		//printf("after loop str = %c\n", str[i]);
		//count++;
		
	}
	
	//printf("out loop str = %s\n", str);
	
	for(int j = 0; j < n / 2; j++){
		
		if(arr[j] != str[j]){
			
			is_palindrome = 0;
			break;
		}
		
	}
	
	
	if(is_palindrome == 0){
		
		printf("The input %s is not a palindrome", arr);
		
	}
	
	else {
		
		printf("The input %s is a palindrome", arr);
		
	}
	
	
	
	return 0;
}