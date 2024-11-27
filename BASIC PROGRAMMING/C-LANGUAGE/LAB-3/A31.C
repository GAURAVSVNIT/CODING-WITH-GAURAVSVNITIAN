// 31. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NUMBER

#include <stdio.h>

int main()
{
    int n, i, a, sum = 0; // Declare variables
    printf("Enter the Number: ");
    scanf("%d", &n); // Read the number from the user

    // Calculate the sum of individual digits
    for (i = 1; n != 0; i++)
    {
        a = n % 10; // Get the last digit
        sum = sum + a; // Add the last digit to the sum
        n = n / 10; // Remove the last digit
    }

    printf("The Sum of the Digits is: %d", sum); // Print the sum of the digits

    return 0; // Return 0 to indicate successful execution
}