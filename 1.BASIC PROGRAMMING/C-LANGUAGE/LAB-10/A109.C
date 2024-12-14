//109) Modify Value Stored in Another Variable Using a Pointer in C
//A. Initialize the Pointer with the Other (A Normal Variable Whose Value We Have to Modify)
#include <stdio.h>

// Function to modify the value of a variable using a pointer
void modifyValue(int *ptr) {
    *ptr = 20; // Modify the value stored in the variable
}

int main() {
    int var = 10;
    int *ptr = &var; // Initialize the pointer with the address of the variable

    printf("Before modification: %d\n", var);

    // Call the function to modify the value
    modifyValue(ptr);

    printf("After modification: %d\n", var);

    return 0;
}
