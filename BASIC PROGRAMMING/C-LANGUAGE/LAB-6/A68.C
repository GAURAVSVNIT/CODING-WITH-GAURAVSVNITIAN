#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3], i, j, k;

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("Enter the element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("Enter the element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
             c[i][j] = 0;
            for (k = 0; k < 3; k++) 
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The multiplication result is:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
