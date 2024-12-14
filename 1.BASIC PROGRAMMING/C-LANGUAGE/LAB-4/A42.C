// 42. READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE

#include <stdio.h>

int main() {
    int n, i, isPrime = 1; // Declare variables

    printf("Enter a number: ");
    scanf("%d", &n); // Read the number from the user

    // Check if the number is less than or equal to 1
    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0; // Return 0 to indicate successful execution
    }

    // Check if the number is prime
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0; // Set isPrime to 0 if a divisor is found
            break; // Exit the loop as we found a divisor
        }
    }

    // Print if the number is prime or composite
    if (isPrime) {
        printf("%d is a prime number.\n", n); // Print that the number is prime
    } else {
        printf("%d is a composite number.\n", n); // Print that the number is composite
    }

    return 0; // Return 0 to indicate successful execution
}
