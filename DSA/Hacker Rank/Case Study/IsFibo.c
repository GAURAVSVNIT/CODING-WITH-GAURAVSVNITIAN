// 
#include <stdio.h>

int isFibo(int n) 
{
    int a = 0, b = 1, c;
    while (a <= n) 
    {
        if (a == n) 
        {
            return 1; // Is a Fibonacci number
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0; // Not a Fibonacci number
}

int main() 
{
    int t, n;

    scanf("%d", &t);

    while (t--) 
    {
        scanf("%d", &n);
        if (isFibo(n)) 
        {
            printf("IsFibo\n");
        } 
        else 
        {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
