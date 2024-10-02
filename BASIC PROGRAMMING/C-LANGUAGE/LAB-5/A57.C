//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include <stdio.h>

int main() 
{
    int n, i;
    // Declare variables to store the maximum and second maximum values
    int max1, max2;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to store the elements
    int arr[n];

    // Read the elements into the array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2
    if (arr[0] > arr[1]) 
    {
        max1 = arr[0];
        max2 = arr[1];
    } 
    else 
    {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Traverse the array to find max1 and max2
    for (i = 2; i < n; i++) 
    {
        if (arr[i] > max1) 
        {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] != max1) 
        {
            max2 = arr[i];
        }
    }

    // Print the results
    printf("Maximum value: %d\n", max1);
    printf("Second maximum value: %d\n", max2);

    return 0;
}
