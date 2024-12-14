//40. READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
//LIST OF NUMBERS READ.

#include <stdio.h>

int main() 
{
    int number;
    int sum = 0;

    // Loop to read numbers until a negative number is entered
    while (1) 
    {
        printf("Enter a number (negative number to stop): ");
        scanf("%d", &number);

        if (number < 0) 
        {
            break;  // Exit the loop if the number is negative
        }

        sum += number;  // Add the number to the sum
    }

    // Print the sum of the numbers entered
    printf("The sum of the numbers entered is: %d\n", sum);

    return 0;
}
