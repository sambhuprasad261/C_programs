#include <stdio.h>
#include <stdlib.h>

int swap(int *a, int *b);

int swap(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

// method 1


int main(){
	
	int arr [] = {0, 1, 0, 0, 2, 0, 0, 4, 0, 0, 3, 0, 0, 7, 0, 0};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	//printf("len = %d\n", len);
	printf("The before arr = ");
	for (int i = 0; i < len; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	int i = 0, j = 0;
	
	while (j < len) {
		
		if(arr[j] != 0){
			
			arr[i] = arr[j];
			i++;
			
		}
		
		j++;
		
	}
	
	printf("\n i = %d, j = %d", i, j);
	
	for(int k = i; k < len; k++){
		
		arr[k] = 0;
		
	}
	
	printf("\nThe After moving zeroes arr = ");
	for (int i = 0; i < len; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	return 0;
}



//method 2

/*

int main(){
	
	int arr [] = {1, 0, 0, 2, 0, 0, 4, 0, 0, 3, 0, 0, 7, 0, 0};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	printf("The before arr = ");
	for (int i = 0; i < len; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	int i = 0, j = 0;
	
	while (j < len) {
		
		if(arr[j] != 0){
			
			swap(&arr[i], &arr[j]);
			i++;
			
		}
		
		j++;
	}
	
	for(int k = i; k < len; k++){
		
		arr[k] = 0;
		
	}
	
	printf("\nThe After moving zeroes arr = ");
	for (int i = 0; i < len; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	return 0;
}

*/