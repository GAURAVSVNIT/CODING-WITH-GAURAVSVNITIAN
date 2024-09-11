//28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) 
{
    int count = 0;
    while (num != 0) 
    {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) 
{
    int originalNum = num;
    int digits = countDigits(num);
    int sum = 0;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (num != 0) 
    {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number and display the result
    if (isArmstrong(number)) 
    {
        printf("%d is an Armstrong number.\n", number);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
