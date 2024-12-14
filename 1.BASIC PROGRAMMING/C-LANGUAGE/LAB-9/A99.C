//99) Read a Text File and Count the Number of Vowels Present in the File
#include <stdio.h>
#include <ctype.h>

// Function to count the number of vowels in a file
int countVowelsInFile(FILE *file) {
    int count = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    FILE *file = fopen("textfile.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Call the function to count the number of vowels
    int vowelCount = countVowelsInFile(file);
    printf("Number of vowels in the file: %d\n", vowelCount);

    fclose(file);
    return 0;
}
