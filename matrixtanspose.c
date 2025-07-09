#include <stdio.h>

void main() {
    int row, col, i, j;
    
    printf("Define the number of rows and columns for the matrix: ");
    scanf("%d %d", &row, &col);

    
    int matA[row][col], matTranspose[col][row];
    
    printf("Enter values of the matrix:\n");
    for (i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    printf("The given matrix is:\n");
        for (i = 0; i < row; i++){
            for (j = 0; j < col; j++){
                printf("%d ", matA[i][j]);
            }
            printf("\n");
        }

    for(i=0; i<col; i++){
        for(j=0; j< row; j++){
            matTranspose[i][j] = matA[j][i];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (i = 0; i < col; i++){
        for (j = 0; j < row; j++){
            printf("%d ", matTranspose[i][j]);
        }
        printf("\n");
    }
}
