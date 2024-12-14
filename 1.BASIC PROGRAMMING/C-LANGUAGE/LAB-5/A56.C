//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
//NEGATIVE, AND ZERO ELEMENTS
#include <stdio.h>

int main() {
    int arr[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Reading 10 integers into the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Counting positive, negative, and zero elements
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) 
        {
            positiveCount++;
        } 
        else if (arr[i] < 0) 
        {
            negativeCount++;
        } 
        else 
        {
            zeroCount++;
        }
    }

    // Printing the counts
    printf("Total positive elements: %d\n", positiveCount);
    printf("Total negative elements: %d\n", negativeCount);
    printf("Total zero elements: %d\n", zeroCount);

    return 0;
}
