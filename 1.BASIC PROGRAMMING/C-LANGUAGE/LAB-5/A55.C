// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
// TOTAL NO. OF EVERY ELEMENT.
#include <stdio.h>

int main() {
    int arr[10];
    int count[101] = {0}; // Assuming the elements are between 0 and 100
    int oddCount = 0;

    // Reading the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++; // Counting occurrences of each element
        if (arr[i] % 2 != 0) 
        {
            oddCount++; // Counting odd numbers
        }
    }

    // Printing the results
    printf("Total number of odd numbers: %d\n", oddCount);
    printf("Occurrences of each element:\n");
    for (int i = 0; i < 101; i++) 
    {
        if (count[i] > 0) 
        {
            printf("%d: %d times\n", i, count[i]);
        }
    }

    return 0;
}
