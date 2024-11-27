//77) Check Whether a Number is Palindrome or Not
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) 
{
    int original = num;  // Store the original number
    int reversed = 0;    // Initialize the reversed number
    int remainder;       // Variable to store remainder

    // Reverse the digits of the number
    while (num != 0) 
    {
        remainder = num % 10;               // Get the last digit
        reversed = reversed * 10 + remainder; // Append the last digit to the reversed number
        num /= 10;                          // Remove the last digit from the number
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the input number

    // Check if the number is a palindrome and print the result
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}