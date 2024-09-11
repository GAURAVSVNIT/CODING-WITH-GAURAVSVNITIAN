//38. PROGRAM TO PRINT 1,4,9,16,25,………N.

#include <stdio.h>

int main() 
{
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Loop to print squares of numbers from 1 to N
    for (int i = 1; i <= N; i++) 
    {
        printf("%d ", i * i);
    }

    return 0;
}
