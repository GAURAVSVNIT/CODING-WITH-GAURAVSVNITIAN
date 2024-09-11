// 24. WRITE A C PROGRAM TO FIND THE VALUE OF Y USING

//  1+x where n=1
// 1+x/n where n=2
// Y(x,n) = 1 +xn
//  when n=3
// 1 + nx when n>3 or n<1

#include <stdio.h>

// Function to calculate Y(x, n) based on the given value of n
double calculateY(double x, int n) 
{
    double y;
    
    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1 + x / 2.0;
    } else if (n == 3) {
        y = 1 + x * x * x;
    } else if (n > 3 || n < 1) {
        y = 1 + n * x;
    } else {
        // This else is technically unnecessary because all cases are covered
        y = 0; // Default case
    }

    return y;
}

int main() 
{
    double x;
    int n;

    // Input x and n
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);





    // Calculate and print the result
    double result = calculateY(x, n);
    printf("The value of Y(x, %d) is: %.2lf\n", n, result);

    return 0;
}
