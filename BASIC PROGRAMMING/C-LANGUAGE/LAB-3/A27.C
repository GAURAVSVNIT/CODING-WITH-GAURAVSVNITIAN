// 27. PROGRAM TO CHECK IF A NUMBER IS PRIME OR NOT

#include <stdio.h>

int main()
{
    int num, i, check = 0;  // Declare variables

    printf("Enter a number: ");
    scanf("%d", &num);  // Read the number from the user

    // Check if the number is prime
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            check = 1;  // Set check to 1 if the number is divisible by any number other than 1 and itself
            break;  // Exit the loop as we found a divisor
        }
    }

    // If check is still 0, the number is prime
    if (check == 0)
    {
        printf("%d is a prime number.\n", num);  // Print that the number is prime
    }
    else
    {
        printf("%d is not a prime number.\n", num);  // Print that the number is not prime
    }

    return 0;  // Return 0 to indicate successful execution
}
