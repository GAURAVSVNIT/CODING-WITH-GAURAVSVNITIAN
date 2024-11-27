// 34. PROGRAM TO PRINT FIBONACCI SERIES. (0, 1, 1, 2, 3…)

#include <stdio.h>

int main()
{
    long int n, i, a, b, c; // Declaring the variables
    printf("Enter the Number: ");
    scanf("%ld", &n); // Read the number of terms from the user

    a = 0; // Initialize the first term
    b = 1; // Initialize the second term
    printf("%ld %ld ", a, b); // Print the first two terms

    // Generate and print the Fibonacci series
    for (i = 3; i <= n; i++)
    {
        c = a + b; // Calculate the next term
        printf("%ld ", c); // Print the next term
        a = b; // Update a to the previous term
        b = c; // Update b to the current term
    }

    return 0; // Return 0 to indicate successful execution
}