#include <stdio.h>
#include<stdlib.h>
/*

int bubble_sort(int arr[], int num);

int bubble_sort(int arr[], int num){
	
	for(int i = 0; i < num - 1; i++){
		
		for(int j = 0; j < num - i - 1; j++){
			
			if(arr[j] > arr[j + 1]){
				
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
				
			}
			
		}
		
		return arr;
	}
	
	
	
}

*/

int main(){
	
	//int arr[] = {5, 3, 4, 1, 8, 2, 10, 9};
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int num = (sizeof(arr) / sizeof(arr[0]));
	for(int i = 0; i < num - 1; i++){
		
		for(int j = 0; j < num - i - 1; j++){
			
			if(arr[j] > arr[j + 1]){
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
				
			}
			
		}

	}
	
	for (int i = 0; i < num; i ++){
		
		printf("%d ", arr[i]);
		
	}
	
	//printf("The sorted array is %d", arr);
	return 0;
}