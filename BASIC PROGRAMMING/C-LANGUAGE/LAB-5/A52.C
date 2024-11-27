#include <stdio.h>

int main() {
    int n;

    printf("Enter the Number: ");
    scanf("%d", &n); // Read the number of rows for the pyramid

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = n - 1; j >= i; j--) {
            printf(" ");
        }
        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // Print decreasing numbers
        for (int l = i - 1; l >= 1; l--) {
            printf("%d", l);
        }
        // Move to the next line
        printf("\n");
    }

    return 0; // Return 0 to indicate successful execution
}