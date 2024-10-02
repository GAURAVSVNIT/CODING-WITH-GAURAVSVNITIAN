// 24. WRITE A C PROGRAM TO FIND THE VALUE OF Y USING

//  1+x where n=1
// 1+x/n where n=2
// Y(x,n) = 1 +xn
//  when n=3
// 1 + nx when n>3 or n<1

#include <stdio.h>

int main() 
{
    float x, y;
    int n;

    // Input x and n
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate y based on the value of n
    if (n == 1) 
    {
        y = 1 + x;
    } 
    else if (n == 2) 
    {
        y = 1 + x / n;
    } 
    else if (n == 3) 
    {
        y = 1 + x * n;
    } 
    else 
    { // n > 3 or n < 1
        y = 1 + n * x;
    }

    // Output the result
    printf("The value of Y(x, n) is: %f\n", y);

    return 0;
}

