//69) PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.

#include <stdio.h>

int main() 
{
    int n, i, search, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element found at position %d", i + 1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;   
}