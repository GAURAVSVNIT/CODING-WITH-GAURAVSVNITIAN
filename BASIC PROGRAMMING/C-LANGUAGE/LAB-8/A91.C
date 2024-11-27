//91) Calculate the Square and Cube of an Entered Number Using Pointers
#include <stdio.h>

// Function to calculate the square and cube of a number using pointers
void calculateSquareAndCube(int *num, int *square, int *cube) {
    *square = (*num) * (*num); // Calculate square
    *cube = (*num) * (*num) * (*num); // Calculate cube
}

int main() {
    int num, square, cube;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to calculate square and cube
    calculateSquareAndCube(&num, &square, &cube);

    // Print the results
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}
