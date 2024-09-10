//17. PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)

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

    // Determine the maximum number using logical operators
    if ((num1 >= num2) && (num1 >= num3)) {
        max = num1; // num1 is greater than or equal to both num2 and num3
    } else if ((num2 >= num1) && (num2 >= num3)) {
        max = num2; // num2 is greater than or equal to both num1 and num3
    } else {
        max = num3; // num3 is greater than or equal to both num1 and num2
    }

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
