//10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA.

// CM = M/2+P/2+C/2+E
//WHERE CM = Cut of f mark
//M = Marks in Mathematics out of 200
//P = Marks in Physics out of 200
//C = Marks in Chemistry out of 200/
//E = Marks in entrance examination out of 100

#include <stdio.h>

int main() 
{
    float M, P, C, E;
    float CM;

    // Input the marks
    printf("Enter marks in Mathematics (out of 200): ");
    scanf("%f", &M);
    printf("Enter marks in Physics (out of 200): ");
    scanf("%f", &P);
    printf("Enter marks in Chemistry (out of 200): ");
    scanf("%f", &C);
    printf("Enter marks in Entrance Examination (out of 100): ");
    scanf("%f", &E);

    // Calculate the cutoff mark
    CM = (M / 2) + (P / 2) + (C / 2) + E;

    // Output the cutoff mark
    printf("The cutoff mark (CM) is: %.2f\n", CM);

    return 0;
}

