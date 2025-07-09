#include <stdio.h>

void main() {
	int i, j, limit, temp;
	

	printf("Enter the limits: ");			// 9 8 1 7
	scanf("%d", &limit);
	
	int arr[limit];
	
	printf("Enter the numbers to add to array: ");
	for (i=0; i<limit; i++) {
		scanf(" %d", &arr[i]);
	}
	
	//sort numbers in ascending orders using bubble sort
	for (i=0; i<limit; i++) {
		for (j=i+1; j< limit; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	printf("%d is the smallest and %d is the largest among the numbers in the array", arr[0], arr[limit-1]);
}
				
		
		
