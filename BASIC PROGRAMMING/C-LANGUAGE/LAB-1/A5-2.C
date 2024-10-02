//5. PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE USING POINTER & FUNCTION

#include <stdio.h>
 int a, b,temp;
int swap(int*a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
   

    // Input values for a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

   swap(&a, &b);

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}