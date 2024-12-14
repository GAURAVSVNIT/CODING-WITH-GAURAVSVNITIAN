// Find	Digits
//  Problem	Statement	
// You	are	given	a	number	N,	you	need	to	print	the	number	of	positions	where	digits	exactly	divides	N.
//  Input	format
//  The	first	line	contains	T	(number	of	test	cases	followed	by	T	lines	each	containing	N).
//  Constraints	
// 1	<=T	<=	15	
// 0	<	N	<	10
//  Output	Format	
// For	each	test	case	print	the	number	of	positions	in	N	where	digits	in	that	number	exactly	divides	the	number	N	in	separate	line.
#include <stdio.h>

int count_divisible_digits(int n) 
{
    int original_n = n;
    int count = 0;

    while (n > 0) 
    {
        int digit = n % 10;
        if (digit != 0 && original_n % digit == 0) 
        {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() 
{
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) 
    {
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);

        int result = count_divisible_digits(n);
        printf("%d\n", result);
    }

    return 0;
}