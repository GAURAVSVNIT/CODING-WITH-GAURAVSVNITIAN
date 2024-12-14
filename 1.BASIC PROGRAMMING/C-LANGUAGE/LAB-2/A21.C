//21. PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC
//OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).

//  20. PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE
# include <stdio.h>

int main() 
{
    char _operator;
    double num1, num2, result;

    // Input the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &_operator);

    // Input two numbers
    printf("Enter two numbers: \n");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (_operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } 
            else 
            {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}



