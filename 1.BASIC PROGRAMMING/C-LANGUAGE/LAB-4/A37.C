//37. PROGRAM TO PRINT 2,4,6,8,10,12………N

#include <stdio.h>

int main() 
{
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Loop to print even numbers from 2 to N
    for (int i = 2; i <= N; i += 2) 
    {
        printf("%d ", i);
    }

    return 0;
}
