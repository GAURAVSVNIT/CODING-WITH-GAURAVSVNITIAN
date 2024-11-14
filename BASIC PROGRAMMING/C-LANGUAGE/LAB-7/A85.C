// 85) Check Whether a Character is a Vowel
#include <stdio.h>

int isVowel(char ch) 
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isVowel(ch))
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is not a vowel.\n", ch);
    return 0;
}

