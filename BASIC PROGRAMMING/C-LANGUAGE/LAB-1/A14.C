 //14. PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL

#include <stdio.h>

int main() 
{
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a capital letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is a capital letter.\n", ch);
    }
    // Check if the character is a small case letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a small case letter.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    // If not a letter or digit, it must be a special symbol
    else {
        printf("'%c' is a special symbol.\n", ch);
    }

    return 0;
}
