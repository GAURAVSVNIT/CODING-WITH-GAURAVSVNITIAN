//83) WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.

#include <stdio.h>
#include <limits.h>

int max(int a[], int n) 
{
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] > max_val) 
        {
            max_val = a[i];
        }
    }
    return max_val;
}

int main() 
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    int max_element = max(a, n);
    printf("The maximum element in the array is: %d\n", max_element);
    return 0;
}