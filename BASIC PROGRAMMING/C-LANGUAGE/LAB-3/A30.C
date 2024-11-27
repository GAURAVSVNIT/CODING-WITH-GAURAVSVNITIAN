// 30. PROGRAM TO REVERSE A GIVEN NUMBER

#include <stdio.h>

int main()
{
    int n, i, a, sum = 0; // Declare variables
    printf("Enter the Number: ");
    scanf("%d", &n); // Read the number from the user

    // Reverse the digits of the number
    for (i = 1; n != 0; i++)
    {
        a = n % 10; // Get the last digit
        sum = sum * 10 + a; // Append the last digit to the reversed number
        n = n / 10; // Remove the last digit
    }

    printf("The Reverse of the Number is: %d", sum); // Print the reversed number

    return 0; // Return 0 to indicate successful execution
}
