#include <stdio.h>

int gcf(int x, int y){
	
	if (x == 0)
		return y;
	
	else if (y == 0)
		return x;
	
	else if (x == y)
		return x;
	
	else{
		
		if (x > y)
			return gcf(x - y, y);
		
		else
			return gcf(x, y - x);
		
	}
	
}

int lcm(int p, int q){
	
	return (p * q)/(gcf(p, q));
	
	
}

int main(){
	
	int a = 0, b = 0;
	int val = 0;
	
	printf("Enter First Number: ");
	scanf("%d", &a);
	
	printf("Enter Second Number: ");
	scanf("%d", &b);
	
	val = lcm(a, b);
	
	printf("The LCM of %d and %d is %d", a, b, val);
	
	return 0;
}