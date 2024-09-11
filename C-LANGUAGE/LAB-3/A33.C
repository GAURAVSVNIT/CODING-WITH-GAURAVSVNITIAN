//33. PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.

#include <stdio.h>
#include <limits.h>

// Function to find the maximum and minimum values in an array
void findMaxAndMin(int arr[], int n, int *max, int *min) 
{
    if (n <= 0) 
    {
        printf("Array must contain at least one element.\n");
        return;
    }

    *max = INT_MIN;
    *min = INT_MAX;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() 
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("The number of elements must be positive.\n");
        return 1;
    }

    int arr[n];

    // Input the elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int max, min;

    // Find max and min
    findMaxAndMin(arr, n, &max, &min);

    // Print the results
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
