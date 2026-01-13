#include <stdio.h>

int is_armstrong(int num, int itt){
	
	int exp;
	int tempp = num;
	int out = 0;
	int rem = 0;
	int count = 0;
	
	while(tempp > 0){
		
		exp = 1;
		
		rem = tempp % 10;
		
		//printf("rem = %d\n", rem);
		
		for(int j = 0; j < itt; j++){
			
			exp = exp * rem;
			
		}
		//printf("exp = %d\n", exp);
		
		out = exp + out;
		
		//printf("out = %d\n", out);
		
		tempp = tempp / 10;
		
	}
	
	/*
	if(out == num){
		count++;
		printf("%d ", out);
	}
	
	else
		return;
	
	if(count == 0)
		printf("There is no armstrong within this range:");
	*/
	
	if(out == num)
		return out;
	else
		return -1;
	
}


int count_num(int n){
	
	int x = 0;
	int temp = n;
	int val;
	
	//printf("count_num function n = %d\n", n);
	
	while(temp > 0){
		
		x++;
		//printf("The count of %d is %d\n", n, x);
		temp = temp/10;
		
	}
	
	val = is_armstrong(n, x);
	
	return val;
	
	//printf("The count of %d is %d\n", n, x);
	
}


int main(){
	
	int upper_limit;
	int lower_limit;
	int output;
	
	printf("What is the lower limit: ");
	scanf("%d", &lower_limit);
	
	printf("What is the Upper limit: ");
	scanf("%d", &upper_limit);
	
	//printf("The lower limit before passing argument is %d\n", lower_limit);
	//printf("The Upper limit before passing argument is %d\n", upper_limit);
	
	printf("The Armstrong numbers are from %d to %d are: ", lower_limit, upper_limit);

	for(int i = lower_limit; i <= upper_limit; i++){
		
		//printf("The itteration in loop is %d\n", i);
		
		output = count_num(i);
		if(output == -1)
			printf("");
		else
			printf("%d ", output);
		
	}
	
	return 0;
}