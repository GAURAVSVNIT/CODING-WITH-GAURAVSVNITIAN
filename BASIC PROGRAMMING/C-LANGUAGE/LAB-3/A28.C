// 28. PROGRAM TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT.

#include <stdio.h>

// Function to calculate a^b using recursion
int power(int a, int b)
{
    if (b == 0)
        return 1;  // Base case: any number to the power of 0 is 1
    else
        return a * power(a, b - 1);  // Recursive case: multiply a by a^(b-1)
}

int main()
{
    int n, rem, sum = 0, temp;  // Declare variables
    printf("Enter the number: ");
    scanf("%d", &n);  // Read the number from the user
    temp = n;  // Store the original number in temp

    // Calculate the sum of the cubes of its digits
    while (temp != 0)
    {
        rem = temp % 10;  // Get the last digit
        sum = sum + power(rem, 3);  // Add the cube of the digit to sum
        temp = temp / 10;  // Remove the last digit
    }

    // Check if the sum of the cubes of its digits is equal to the original number
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);  // Print that the number is Armstrong
    else
        printf("%d is not an Armstrong number.\n", n);  // Print that the number is not Armstrong

    return 0;  // Return 0 to indicate successful execution
}
