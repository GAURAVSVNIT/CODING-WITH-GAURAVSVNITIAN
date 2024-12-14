//97) Count the Number of Vowels in a String Using Pointers
#include <stdio.h>

// Function to count the number of vowels in a string using pointers
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from the user

    // Call the function to count the number of vowels
    int vowelCount = countVowels(str);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
