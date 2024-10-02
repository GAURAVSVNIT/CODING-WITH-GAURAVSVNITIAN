//) PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE 
// ARRAYS.

#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], i;

    // Reading 10 integers into the first array
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Reading 10 integers into the second array
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Swapping values of the two arrays
    for (i = 0; i < 10; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    // Printing the swapped arrays
    printf("Array 1:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2:\n");

    for (i = 0; i < 10; i++)

    {
        printf("%d ", arr2[i]);
    }
}
