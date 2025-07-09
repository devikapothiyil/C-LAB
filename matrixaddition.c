#include <stdio.h>

void main() {
	int row, col, i, j;
	
	printf("Define the number of rows and columns: ");
	scanf("%d %d", &row, &col);
	
	int matA[row][col], matB[row][col], matSum[row][col];
	
	printf("Enter values of the first matrix: ");
	for (i=0; i < row; i++){
		for(j=0; j<col; j++){
			scanf("%d", &matA[i][j]);
		}
	}
	
	printf("Enter values of the Second matrix: ");
	for (i=0; i < row; i++){
		for(j=0; j<col; j++){
			scanf("%d", &matB[i][j]);
		}
	}
	
	for (i=0; i < row; i++){
		for(j=0; j<col; j++){
			matSum[i][j] = matA[i][j] + matB[i][j];
		}
	}
	
	printf("The sum of the two matrix=\n");
	for (i=0; i < row; i++){
		for(j=0; j<col; j++){
			printf(" %d ", matSum[i][j]);
		}
		printf("\n");
	} 
}
