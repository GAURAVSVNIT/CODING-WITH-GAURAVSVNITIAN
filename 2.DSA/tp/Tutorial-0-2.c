// Q-5. Write a program to convert a decimal number to its binary equivalent using
// loops.
// Example: Input 5, Output 101.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int binary = 0, i = 0;
    while (n > 0)
    {
        binary += (n % 2) * pow(10, i);
        n /= 2;
        i++;
    }

    printf("Binary equivalent: %d\n", binary);

    return 0;
}