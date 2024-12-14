// 78) Check Whether a Number is Armstrong or Not
#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) 
{
    int original = num;  // Store the original number
    int sum = 0;         // Initialize sum of powers of digits
    int digits = 0;      // Initialize number of digits
    int remainder;       // Variable to store remainder

    // Calculate the number of digits in the number
    while (num != 0) 
    {
        num /= 10;
        digits++;
    }

    num = original;  // Reset num to the original number

    // Calculate the sum of the powers of its digits
    while (num != 0) 
    {
        remainder = num % 10;
        sum += pow(remainder, digits);  // Add the power of the digit to the sum
        num /= 10;
    }

    // Check if the sum of the powers of its digits is equal to the original number
    return sum == original;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}