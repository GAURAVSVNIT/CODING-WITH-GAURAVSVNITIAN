// 23. PROGRAM TO READ TWO NUMBERS AND CALCULATE POWER WITHOUT USING HEADER FILE (<MATH.H>).

#include <stdio.h>

int main()
{
    int a, i, b, c = 1;  // Declare variables

    printf("Enter the Base: ");
    scanf("%d", &a);  // Read the base number

    printf("Enter the Exponent: ");
    scanf("%d", &b);  // Read the exponent

    // Calculate a^b using a loop
    for (i = 1; i <= b; i++)
    {
        c = c * a;  // Multiply c by a, b times
    }

    printf("The Answer is: %d\n", c);  // Print the result

    return 0;  // Return 0 to indicate successful execution
}