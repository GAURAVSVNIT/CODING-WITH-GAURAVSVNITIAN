//22. PROGRAM TO CALCULATE FACTORIAL OF A NO

#include <stdio.h>

int main() 
{
    int num, i;
    unsigned long long factorial = 1;

    // Input a number from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate the factorial using an iterative approach
        for (i = 1; i <= num; ++i) {
            factorial *= i;  // factorial = factorial * i
        }
        // Print the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
