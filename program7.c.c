#include <stdio.h>
int isLowerTriangular(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != 0) {
                return 0; 
            }
        }
    }
    return 1;
}

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter number of rows, columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Not a lower triangular matrix\n");
        return 0;
    }
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (isLowerTriangular(matrix, rows, cols)) {
        printf("Lower triangular matrix\n");
    } else {
        printf("Not a lower triangular matrix\n");
    }

    return 0;
}

