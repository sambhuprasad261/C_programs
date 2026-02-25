#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_palindrome(char str[], int len);

void check_palindrome(char str[], int len){
	
	int is_palindrome = 1;
	
	for(int i = 0; i < len / 2; i++){
		
		if(str[i] != str[len - 1 - i]){
			
			is_palindrome = 0;
			break;
			
		}
		
	}
	
	if(is_palindrome == 0){
		
		printf("The input %s is not a palindrome", str);
		
	}
	
	else{
		
		printf("The input %s is a palindrome", str);
		
	}
	
}

int main(){
	
	char str[100];
	
	printf("Enter the input to check the palindrome: ");
	//scanf("%s", str);
	
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	
	//printf("You Entered %s", str);
	
	int n = strlen(str);
	//printf("len = %d", n);
	
	check_palindrome(str, n);
	
	return 0;
}

