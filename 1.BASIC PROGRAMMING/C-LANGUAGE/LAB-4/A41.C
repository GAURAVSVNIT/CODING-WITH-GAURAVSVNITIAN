//41. READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)

#include <stdio.h>

int main() 
{
    int N;

    // Input the value of N
    printf("Enter a number N: ");
    scanf("%d", &N);

    // Print the factors of N
    printf("The factors of %d are: ", N);
    for (int i = 1; i <= N; i++) 
    {
        if (N % i == 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
