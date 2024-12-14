//35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N

#include <stdio.h>

int main() 
{
    int N, sum = 0;

    // Input the number N
    printf("Enter a number N: ");
    scanf("%d", &N);

    // Loop to calculate the sum of digits
    while (N > 0) 
    {
        sum += N % 10;  // Add the last digit of N to sum
        N /= 10;        // Remove the last digit from N
    }

    // Loop to reduce sum to a single-digit number
    while (sum >= 10) 
    {
        int tempSum = 0;
        while (sum > 0) 
        {
            tempSum += sum % 10;
            sum /= 10;
        }
        sum = tempSum;
    }

    // Print the single-digit sum
    printf("Single-digit sum: %d\n", sum);

    return 0;
}


