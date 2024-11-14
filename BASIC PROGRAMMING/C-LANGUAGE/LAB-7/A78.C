//78) Check Whether a Number is Armstrong or Not
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) 
{
    int original = num, sum = 0, digits = 0, remainder;
    while (num != 0) 
    {
        num /= 10;
        digits++;
    }
    num = original;
    while (num != 0) 
    {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }
    return sum == original;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}