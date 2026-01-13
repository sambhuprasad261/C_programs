#include <stdio.h>

int gcf(int p, int q){
	
	//debug code start
	// keep track for how many itteration this function use to get the answer
	static int i = 1;
	
	printf("i = %d p = %d, q = %d\n", i, p, q);
	
	i++;
	// debug code end
	
	// actual code implimentation
	if(p == 0)
		return q;
	
	else if (q == 0)
		return p;
	
	else if(p == q){
		
		return p;
	}
	
	else{
		
		// careful with subtraction operation other wise it will give the negetive values causes crash this code
		if( p > q)
			 //when calling the gcf function make sure that use subtraction rather than modulo operator
			return gcf(p - q, q);
		
		else
			
			return gcf(p, q - p);
	}
	
}

int main(){
	
	int a = 0, b = 0;
	int val = 0;
	
	// Inputs for two values
	printf("Enter the first value: ");
	scanf("%d", &a);
	
	printf("Enter the second value: ");
	scanf("%d", &b);
	
	// calling gcf function and result is stored in val variable 
	val = gcf(a, b);
	
	printf("The gcf of two numbers is %d", val);
	
	return 0;
}