//79) Exchange Values of Two Variables
#include <stdio.h>

void exchange(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before exchange: a = %d, b = %d\n", a, b);
    exchange(&a, &b);
    printf("After exchange: a = %d, b = %d\n", a, b);
    return 0;
}