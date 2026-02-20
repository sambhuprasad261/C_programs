#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int arr [] = {5, 4, 3, 2, 1, 0};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	for(int i = 0; i < len - 1; i++){
		
		int min_val = i;
		
		for(int j = i + 1; j < len; j++){
			
			if(arr[j] < arr[min_val]){
				
				min_val = j;
				
			}
			
		}
		
		int temp = arr[i];
		arr[i] = arr[min_val];
		arr[min_val] = temp;
	}
	
	printf("The sorted array is ");
	
	for(int i = 0; i < len; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	return 0;
}