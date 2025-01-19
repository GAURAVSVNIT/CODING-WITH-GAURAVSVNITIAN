// 1. Write a C program to remove duplicate elements from an array.

#include <stdio.h>
#include <stdlib.h>
#define HASH_SIZE 1000

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 1. Write a C program to remove duplicate elements from an array.
    int hash[HASH_SIZE] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 0)
        {
            arr[j++] = arr[i];
            hash[arr[i]] = 0;
        }
    }
    n = j;
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


}