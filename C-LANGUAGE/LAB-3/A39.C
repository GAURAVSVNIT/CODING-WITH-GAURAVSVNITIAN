//39. PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.

#include <stdio.h>

int main() 
{
    int N;
    double sum = 0.0;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Loop to calculate the sum of the series
    for (int i = 1; i <= N; i++) 
    {
        long fact = 1;  // Initialize factorial for each i

        // Calculate factorial of i
        for (int j = 1; j <= i; j++) 
        {
            fact *= j;
        }

        // Add i / i! to the sum
        sum += (double)i / fact;
    }

    // Print the result
    printf("The sum of the series is: %f\n", sum);

    return 0;
}
