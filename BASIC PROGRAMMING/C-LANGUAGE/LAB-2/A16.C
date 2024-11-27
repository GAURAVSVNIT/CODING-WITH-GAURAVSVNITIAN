//16. PROGRAM TO READ THREE NOS. AND PRINT MAX

#include <stdio.h>

int main() 
{
    int num1, num2, num3, max;

    // Input three numbers
    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    // Determine the maximum number
    max = num1; // Assume num1 is the maximum initially

    if (num2 > max) 
    {
        max = num2; // Update max if num2 is greater
    }
    if (num3 > max) 
    {
        max = num3; // Update max if num3 is greater
    }

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
