#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    int rowSum;

    // Input dimensions
    // For the example, you would input 3 3
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating and printing sum of each row
    for (i = 0; i < rows; i++) {
        rowSum = 0; // Reset sum to 0 for each new row
        for (j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("%d\n", rowSum);
    }

    return 0;
}
