//76) Check Whether a Number is Even or Odd
#include <stdio.h>

void checkEvenOdd(int num) 
{
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}