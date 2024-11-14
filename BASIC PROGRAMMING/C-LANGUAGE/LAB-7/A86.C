// 86) WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT  LENGTH OF STRING. 
#include <stdio.h>
#include <string.h>
void len()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length of the string: %d", count);
}
int main()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    len();
    return 0;
}