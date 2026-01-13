#include <stdio.h>

int neonnum(int num){
	
	int sqr = num * num;
	int rem = 0;
	
	//printf("sqr = %d\n", sqr);
	
	while(sqr > 0){
		
		rem = rem + sqr % 10;
		//printf("rem = %d\n", rem);
		sqr = sqr /10;
		
	}
	
	if(rem == num)
		return rem;
	
}

int main(){
	
	int n;
	int val;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	val = neonnum(n);
	printf("val = %d\n", val);
	
	if(val == n)
		printf("The number %d is neon number: ", n);
	
	else if (val != n)
		printf("The number %d is not neon number:", n);
	
	return 0;
}