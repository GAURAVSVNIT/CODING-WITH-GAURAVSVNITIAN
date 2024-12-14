//45. (A GUESSING GAME): With this program the user has to guess a number that 
// the program has picked as the lucky number. It uses one for loop and plenty of if 
// statements. I’ve also thrown in a conditional operator, just to make sure you 
// haven’t forgotten how to use it!

#include<stdio.h>  // Include standard input/output library
#include<stdlib.h> // Include standard library for srand and rand functions
#include<time.h>   // Include time library for seeding random number generator

int main()
{
    // Define constants for minimum and maximum values
    const int MIN = 1;
    const int MAX = 100;

    // Seed random number generator with current time
    srand(time(0));

    // Declare variables for guessed number, generated number, and attempt count
    int guessed, generated, count = 0;

    // Generate a random number between MIN and MAX
    generated = (rand() % MAX) + MIN;

    // Loop until the user guesses the correct number
    do {
        // Prompt user to guess a number
        printf("\nGuess any number between 1-100: ");
        scanf("%d", &guessed);

        // Check if user's guess is out of range
        if (guessed > 100 || guessed < 1) 
        {
            printf("You guessed out of the range!!\n");
            count++;
        }
        // Check if user's guess is too high
        else if (guessed > generated) 
        {
            printf("TOO High!!!\n");
            count++;
        }
        // Check if user's guess is too low
        else if (guessed < generated) 
        {
            printf("TOO Low!!!\n");
            count++;
        }
        // If user guesses correctly, congratulate and exit loop
        else 
        {
            printf("Congratulations!!!!!!\nYou guessed the correct number\nWhich was : %d in %d tries\n", guessed, count);
            break;
        }
    } 
        while (guessed != generated);

    return 0;
}