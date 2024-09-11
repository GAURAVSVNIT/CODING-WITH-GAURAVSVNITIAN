//32. PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .

#include <stdio.h>
#include <limits.h>

void findMaxAndSecondMax(int arr[], int n, int *max, int *secondMax) 
{
    if (n < 2) 
    {
        printf("Not enough elements to find both max and second max.\n");
        return;
    }

    *max = INT_MIN;
    *secondMax = INT_MIN;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > *max) 
        {
            *secondMax = *max;
            *max = arr[i];
        } else if (arr[i] > *secondMax && arr[i] != *max) {
            *secondMax = arr[i];
        }
    }

    // If secondMax is still INT_MIN, it means there was no valid second maximum
    if (*secondMax == INT_MIN) 
    {
        printf("All elements are the same or not enough distinct elements to find second max.\n");
    }
}

int main() 
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) 
    {
        printf("You need at least two numbers to find both max and second max.\n");
        return 1;
    }

    int arr[n];

    // Input the elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int max, secondMax;

    // Find max and second max
    findMaxAndSecondMax(arr, n, &max, &secondMax);

    // Print the results
    printf("Maximum value: %d\n", max);
    if (secondMax != INT_MIN) 
    {
        printf("Second maximum value: %d\n", secondMax);
    }

    return 0;
}
