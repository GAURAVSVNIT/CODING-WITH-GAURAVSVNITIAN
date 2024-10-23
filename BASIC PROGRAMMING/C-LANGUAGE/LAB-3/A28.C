//28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.

#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}
int main()
{
    int n, rem, sum = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + power(rem, 3);
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is an armstrong number.", n);
    else    
        printf("%d is not an armstrong number.", n);    

    return 0;
}
