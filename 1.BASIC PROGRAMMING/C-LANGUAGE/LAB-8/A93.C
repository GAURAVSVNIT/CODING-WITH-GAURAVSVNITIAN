//93) Count the Number of Words in a Given String Using Pointers
#include <stdio.h>
#include <ctype.h>

// Function to count the number of words in a string using pointers
int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) { // Check if the current character is a space
            inWord = 0; // Set inWord to 0 if it's a space
        } else if (!inWord) { // If it's not a space and inWord is 0
            inWord = 1; // Set inWord to 1
            count++; // Increment the word count
        }
        str++; // Move to the next character
    }

    return count; // Return the word count
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from the user

    // Call the function to count the number of words
    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);

    return 0;
}
