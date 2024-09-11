//36. PROGRAM TO PRINT 1,3,5,7,9………N. 

#include <stdio.h>

int main() 
{
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Loop to print odd numbers from 1 to N
    for (int i = 1; i <= N; i += 2) 
    {
        printf("%d ", i);
    }

    return 0;
}
