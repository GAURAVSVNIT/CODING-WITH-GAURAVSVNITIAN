// PROGRAM TO SORT (SELECTION SORT) AN ARRAY.

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], i, j, temp, n; // Declare variables
    printf("Enter the number of elements: ");
    scanf("%d", &n); // Read the number of elements from the user
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read the elements into the array
    }

    // Selection sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        int min = INT_MAX; // Initialize min to the maximum possible integer value
        int min_index = i; // Initialize min_index to the current index

        // Find the minimum element in the unsorted part of the array
        for (j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j]; // Update min if a smaller element is found
                min_index = j; // Update min_index to the index of the smaller element
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Print the sorted array
    }

    return 0; // Return 0 to indicate successful execution
}