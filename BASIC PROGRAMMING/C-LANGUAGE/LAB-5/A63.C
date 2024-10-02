// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

#include <stdio.h>

int main()
{

    int a[3][3], i, j, max, min;

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];
    min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];

            }
        }
    }   

    printf("The minimum element is: %d\n", min);
    printf("The maximum element is: %d\n", max);    
    return 0;
    
}