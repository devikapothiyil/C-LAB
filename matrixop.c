#include <stdio.h>

// Function prototypes
void readMatrix(int matrix[][2]);
void addMatrices( int matrix1[][2],  int matrix2[][2], int result[][2]);
void subtractMatrices( int matrix1[][2],  int matrix2[][2], int result[][2]);
void multiplyMatrices( int matrix1[][2],  int matrix2[][2], int result[][2]);
void transposeMatrix( int matrix[][2], int result[][2]);
void displayMatrix( int matrix[][2]);

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2], operation;
    printf("Choose an operation(1,2,3,4): \n1. Add\n2. Subtract\n3. Multiply\n4. Transpose\n");
    scanf("%d", &operation);

    if (operation == 1 || operation == 2 || operation == 3){
        printf("Enter elements of first matrix:\n");
        readMatrix(matrix1);

        printf("Enter elements of second matrix:\n");
        readMatrix(matrix2);

         if(operation == 1){
            // Addition
            addMatrices(matrix1, matrix2, result);
            printf("\nAddition of matrices:\n");
            displayMatrix(result);
         }   
        if(operation == 2){
            // Subtraction
            subtractMatrices(matrix1, matrix2, result);
            printf("\nSubtraction of matrices:\n");
            displayMatrix(result);
        }
        if(operation == 3){
            // Multiplication
            multiplyMatrices(matrix1, matrix2, result);
            printf("\nMultiplication of matrices:\n");
            displayMatrix(result);
        }

    }
    else{
        if (operation == 4){
            printf("Enter elements of matrix:\n");
            readMatrix(matrix1);
            
            // Transpose of matrix 1
            transposeMatrix(matrix1, result);
            printf("\nTranspose of matrix 1:\n");
            displayMatrix(result);
        } 
    }
        
    return 0;
    }

// Function to read a 2x2 matrix from the user
void readMatrix(int matrix[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int matrix1[][2],  int matrix2[][2], int result[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices( int matrix1[][2],  int matrix2[][2], int result[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices( int matrix1[][2],  int matrix2[][2], int result[][2]) {
    result[0][0] = matrix1[0][0] * matrix2[0][0] + matrix1[0][1] * matrix2[1][0];
    result[0][1] = matrix1[0][0] * matrix2[0][1] + matrix1[0][1] * matrix2[1][1];
    result[1][0] = matrix1[1][0] * matrix2[0][0] + matrix1[1][1] * matrix2[1][0];
    result[1][1] = matrix1[1][0] * matrix2[0][1] + matrix1[1][1] * matrix2[1][1];
}

// Function to find the transpose of a matrix
void transposeMatrix( int matrix[][2], int result[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix[j][i];
        }
    }
}

// Function to display a 2x2 matrix
void displayMatrix( int matrix[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
