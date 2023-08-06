#include <stdio.h> 

void bubble_sort(int arr[], int size);

int main(void){
	int size;
	printf("enter size of array\n");
	scanf(" %d", &size);

	int array[size];
	printf("enter array elements\n");
	for (int i=0; i<size; i++){
		scanf(" %d", &array[i]);
	}
	
	bubble_sort(array, size);
	
	return 0;
}

void bubble_sort(int arr[], int size){
	int temp;
	
	printf("sorted array: ");
	for(int i = 0; i<size; i++){
		for(int j = 0; j<(size-1-i); j++){
			if(arr[j] > arr[j+1]){
				temp     = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for (int k = 0; k<size; k++){
		printf("%d ", arr[k]);
	}
}