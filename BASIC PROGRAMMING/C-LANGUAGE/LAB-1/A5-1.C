//5. PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE

#include <stdio.h>

int main() 
{   
    int a, b,temp;   

    // Input values for a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values using a third variable (temp)
    temp = a;
    a = b;
    b = temp;

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

    int a, b, temp;

    // In