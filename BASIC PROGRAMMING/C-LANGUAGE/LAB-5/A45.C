//45. (A GUESSING GAME): With this program the user has to guess a number that 
// the program has picked as the lucky number. It uses one for loop and plenty of if 
// statements. I’ve also thrown in a conditional operator, just to make sure you 
// haven’t forgotten how to use it!

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const int MIN=1;
    const int MAX=100;


    srand(time(0));

    int guessed,generated,count=0;
    generated = (rand() % MAX) +MIN;

    do{
    printf("\nGuess any number between 1-100:");
    scanf("%d",&guessed);

    if(guessed>100 || guessed<1)
    {
        printf("You guessed out of the range!!\n");
        count++;
    }

    else if(guessed>generated)
    {
        printf("TOO High!!!\n");
        count++;
    }
    else if(guessed<generated)
    {
        printf("TOO Low!!!\n");
        count++;
    }
    else
    {
        printf("Congratulations!!!!!!\nYou guessed the correct number\nWhich was : %d in %d tries\n",guessed,count);
        break;
    }
    }while(guessed!=generated);
    return 0;
}