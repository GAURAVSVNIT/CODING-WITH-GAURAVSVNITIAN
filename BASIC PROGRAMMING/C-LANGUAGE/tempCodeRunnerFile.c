#include <stdio.h>

int main() {
    int a[3][3], i, j;

    // Input matrix elements
    printf("Enter 9 elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Display the matrix with a box around it
    printf("\nMatrix is:\n");
    printf("+-----+-----+-----+\n");  // Top border
    for (i = 0; i < 3; i++) {
        printf("|");
        for (j = 0; j < 3; j++) {
            printf(" %2d |", a[i][j]);  // Print each element
        }
        printf("\n");  // Row border

        
    } 
        printf("+-----+-----+-----+\n");  // Row border

    // Calculate and print the sum of each row
    printf("Sum of all rows:\n");
    for (i = 0; i < 3; i++) {
        int sum = 0;  // Initialize sum for each row
        for (j = 0; j < 3; j++) {
            sum += a[i][j];  // Accumulate the sum
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
