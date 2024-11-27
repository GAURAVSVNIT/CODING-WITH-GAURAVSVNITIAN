//94) Copy a String in Reverse Order to Another String Variable Using Pointers
#include <stdio.h>
#include <string.h>

// Function to reverse a string using pointers
void reverseString(char *source, char *destination) {
    int length = strlen(source); // Get the length of the source string
    for (int i = 0; i < length; i++) {
        *(destination + i) = *(source + (length - 1 - i)); // Copy characters in reverse order
    }
    *(destination + length) = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "SVNITJAVA";
    char destination[100];

    // Call the function to reverse the string
    reverseString(source, destination);

    // Print the reversed string
    printf("Reversed string: %s\n", destination);

    return 0;
}
