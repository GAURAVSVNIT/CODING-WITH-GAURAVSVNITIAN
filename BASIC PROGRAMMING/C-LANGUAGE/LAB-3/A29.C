// 29. PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

#include <stdio.h>

int main()
{
    int n, i, a, sum = 0, k; // Declaring the variables
    printf("Enter the Number: ");
    scanf("%d", &n); // Read the number from the user

    k = n; // Store the original number in k

    // Reverse the digits of the number
    for (i = 1; n != 0; i++)
    {
        a = n % 10; // Get the last digit
        sum = sum * 10 + a; // Append the last digit to the reversed number
        n = n / 10; // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (sum == k)
    {
        printf("%d is a Palindrome\n", k); // Print that the number is a palindrome
    }
    else
    {
        printf("%d is not a Palindrome\n", k); // Print that the number is not a palindrome
    }

    return 0; // Return 0 to indicate successful execution
}