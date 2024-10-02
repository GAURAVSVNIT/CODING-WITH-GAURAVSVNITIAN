//28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.

#include <stdio.h>
#include <math.h>
int main()
{
    int n, rem, sum = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, 3);
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is an armstrong number.", n);
    else    
        printf("%d is not an armstrong number.", n);    

    return 0;
}
