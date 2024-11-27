// 79) Exchange Values of Two Variables
#include <stdio.h>

// Function to exchange the values of two variables
void exchange(int *x, int *y) 
{
    int temp = *x;  // Store the value of x in a temporary variable
    *x = *y;        // Assign the value of y to x
    *y = temp;      // Assign the value of the temporary variable to y
}

int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  // Read two integers from the user
    printf("Before exchange: a = %d, b = %d\n", a, b);  // Print the values before exchange
    exchange(&a, &b);  // Call the exchange function to swap the values
    printf("After exchange: a = %d, b = %d\n", a, b);  // Print the values after exchange
    return 0;  // Return 0 to indicate successful execution
}