#include <stdio.h>
#include <math.h>

void armstrong(int inp, int itt){
	
	int rem = 0;
	int temp = inp;
	int sum = 0;
	
	while (temp > 0){
		
		int exp = 1;
		
		rem = temp % 10;
		//printf(" remandier loop rem = %d, temp = %d, sum = %d, itt = %d\n", rem, temp, sum, itt);
		//exp = round(pow(rem, itt));
		
		for(int i = 0; i < itt; i++){
			//printf("before exp = %d, i = %d, itt = %d\n", exp, i, itt);
			exp = exp*rem;
			//printf("after exp = %d, i = %d, itt = %d\n", exp, i, itt);
			
		}
		
		sum = sum + exp;
		
		//printf(" sum power loop rem = %d, temp = %d, exp = %d, sum = %d, itt = %d\n", rem, temp, exp, sum, itt);
		temp = temp / 10;
		//printf(" temp loop rem = %d, temp = %d, sum = %d\n", rem, temp, sum);
		
	}
	
	//printf(" after loop inp = %d, sum = %d\n", inp, sum);
	
	if(sum == inp)
		printf("The number %d is Armstrong number", inp);
	
	else
		printf("The number %d is not Armstrong number", inp);
		
	
}


void countnum(int num){
	
	int x = num;
	int i = 0;
	
	//printf("before loop i = %d\n", i);
	//printf("before loop x = %d\n", x);
	
	while(x > 0){
		
		i++;
		x = x / 10;
		
		//printf("Inside loop i = %d\n", i);
		//printf("Inside loop x = %d\n", x);
		
	}
	
	//printf("after loop i = %d\n", i);
	
	armstrong(num, i);
	
	//return i;
	
}

int main(){
	
	int n;
	
	printf("Enter Positive number: ");
	scanf("%d", &n);
	
	if(n < 0){
		
		printf("Enter Positive Numbers only");
	
	}	
	
	else
		countnum(n);
	
	return 0;
}