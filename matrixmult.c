#include <stdio.h>

int main() {
    int row1, row2, col1, col2, i, j, k;
    
    printf("Define the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Define the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    
    int matA[row1][col1], matB[row2][col2], matProd[row1][col2];
    
    printf("Enter values of the first matrix:\n");
    for (i = 0; i < row1; i++){
        for(j = 0; j < col1; j++){
            scanf("%d", &matA[i][j]);
        }
    }

	printf("The first matrix is:\n");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col1; j++){
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }

    printf("Enter values of the second matrix:\n");
    for (i = 0; i < row2; i++){
        for(j = 0; j < col2; j++){
            scanf("%d", &matB[i][j]);
        }
    }
	printf("The second matrix is:\n");
    for (i = 0; i < row2; i++){
        for (j = 0; j < col2; j++){
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    if (col1 != row2){
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }
    else {
        for(i = 0; i < row1; i++) {
            for(j = 0; j < col2; j++) {
                matProd[i][j] = 0;
                for(k = 0; k < row2; k++) {
                    matProd[i][j] += matA[i][k] * matB[k][j];
                }
            }
        }                                        
    }

    printf("The product of the matrices is:\n");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col2; j++){
            printf("%d ", matProd[i][j]);
        }
        printf("\n");
    }

    return 0;
}
