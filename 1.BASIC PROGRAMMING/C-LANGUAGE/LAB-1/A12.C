//12. PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER.

#include <stdio.h>

int main()
 {
    char ch;
    
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print the ASCII code of the character
    printf("The ASCII code of '%c' is: %d\n", ch, ch);

    return 0;
}
