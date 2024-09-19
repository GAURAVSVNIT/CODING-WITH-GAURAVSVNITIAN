// 45. (A GUESSING GAME): With this program the user has to guess a number that
// the program has picked as the lucky number. It uses one for loop and plenty of if
// statements. I’ve also thrown in a conditional operator, just to make sure you
// haven’t forgotten how to use it!
 
 #include <stdio.h>

int main()
{
    int guess, number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Guess the number: ");
    scanf("%d", &guess);
    if (guess == number)
    {
        printf("You guessed it right"); 
    }           
    else
    {
        printf("You guessed it wrong");
    }

    return 0;   
}