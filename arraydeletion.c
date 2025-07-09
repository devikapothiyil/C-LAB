//store n numbers to array, user input position, delete element in index, fix index by removing void space index-1 of other elemtns

#include <stdio.h>

void main() {
	int i, j, limit, indexDel;
	
	printf("Define the length of the array: ");			// 9 8 1 7
	scanf("%d", &limit);
	
	int arr[limit];
	
	printf("Enter the numbers you want to add into the array: ");
	for (i=0; i<limit; i++) {
		scanf(" %d", &arr[i]);
	}
	
	printf("Define the index of the array element where you want to delete: ");			// 9 8 1 7
	scanf("%d", &indexDel);
	
	if (indexDel >= limit) {
		printf("Invalid index position");
	}
	else {
		for (i = indexDel; i < limit; i++)  
        	{  
            		arr[i] = arr[i+1];
            		printf("Updated array: ");
            	}
            		for (i=0; i<limit-1; i++) {
				printf("%d ", arr[i]);
			}
       		}
       	}
