#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inttostr(int n){
	
	static char str[1000];
	int i = 0;
	
	while (n > 0) {
		
		str[i] = n % 10 + '0';
		
		n = n / 10;
		i++;
		
		//printf("loop i = %d, n = %d", i, n);
		
	}
	
	str[i] = '\0';
	
	return str;
	
}


int main(){
	
	int n = 0;
	int count = 0;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	char *s;
	
	for (int j = 1; j < n + 1; j++){
		
		s = inttostr(j);
		//printf("The string n = %s\n", s);
		for (int i = 0; s[i] != '\0'; i++){
		
		//printf("i = %c", str[i]);
		if (s[i] == '1'){
			
			count++;
			//printf("count = %d", count);
			
		}
		
		else{
			
			continue;
			
		}
		
	}
		
	}
	
	printf("The total ones in str = %s is %d", s, count);
	
	return 0;
}