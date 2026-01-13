#include <stdio.h>
#include <math.h>

int countnum(int count){
	
	int i = 0;
	
	while(count > 0){
		
		i++;
		
		count = count/10;
		
	}
	
	return i;
	
}

void reversenum(int n){
	
	//printf("Num = %d", n);
	
	int rem = 0;
	int out = 0;
	int temp = n;
	int itt = 0;
	
	itt = (countnum(n)) - 1;
	printf("itt = %d\n", itt);
	
	while(temp > 0){
		
		rem = temp % 10;
		//printf("rem = %d", rem);
		out = out + (rem * round(pow(10, itt)));
		printf("out = %d\n", out);
		temp = temp / 10;
		itt --;
		
	}
	
	printf("The reverse number of num = %d is %d", n, out);
	return;

}


int main(){
	
	int num;
	
	printf("Print any positive number to reverse: ");
	scanf("%d", &num);
	
	reversenum(num);
	
	return 0;
}