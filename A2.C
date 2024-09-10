//2. PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE

#include <stdio.h>

int main() 
{
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float percentage;

    // Reading marks for each subject individually
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    printf("Enter marks for subject 4: ");
    scanf("%d", &marks4);

    printf("Enter marks for subject 5: ");
    scanf("%d", &marks5);

    // Calculating total marks
    total = marks1 + marks2 + marks3 + marks4 + marks5;

    // Calculating percentage
    percentage = total / 5.0;

    // Displaying the results
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
