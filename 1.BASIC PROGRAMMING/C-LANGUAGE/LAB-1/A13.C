//13. PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.

 #include <stdio.h>

int main() 
{
    int number;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check whether the number is even or odd
    if (number % 2 == 0) 
    {
        printf("%d is even.\n", number);
    } 
    else 
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}
