//19. PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR
//NOT USING CONDITIONAL OPERATOR

#include <stdio.h>

int main() 
{
    char ch;
    const char *result;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a small case letter using the conditional operator
    result = (ch >= 'a' && ch <= 'z') 
             ? "The character is a small case letter."
             : "The character is not a small case letter.";

    // Print the result
    printf("%s\n", result);

    return 0;
}
