//15. PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION

#include <stdio.h>

int main() 
{
    float marks[5], total = 0.0, average;
    int i;

    // Input marks for five subjects
    printf("Enter marks for five subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate average marks
    average = total / 5;

    // Print the division based on average marks
    printf("Average marks: %.2f\n", average);
    
    if (average >= 60) {
        printf("Division: First Division\n");
    } else if (average >= 50) {
        printf("Division: Second Division\n");
    } else if (average >= 40) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
