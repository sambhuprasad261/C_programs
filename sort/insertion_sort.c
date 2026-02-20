#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[], int n){
	
	int i = 0, j = 0, key = 0;
	
	for (i = 1; i < n; i++){
		
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			
			arr[j + 1] = arr[j];
			j = j - 1;
			
		}
		
		// because after while loop ends j = -1 always so j + 1 means j = 0
		arr[j + 1] = key;
		
	}
	
}

int main(){
	
	int arr[] = {5, 4, 3, 2, 1};
	int arr_len = (sizeof(arr))/(sizeof(arr[0]));
	
	printf("The Unsorted array is: ");
	for(int i = 0; i < arr_len; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	insertion_sort(arr, arr_len);
	
	printf("\n");
	printf("The Sorted array is: ");
	for(int i = 0; i < arr_len; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	
	
	return 0;
}