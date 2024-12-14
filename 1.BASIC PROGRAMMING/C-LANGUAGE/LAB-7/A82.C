/*
82.WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. 
    NCR = (!N/(!R*!(N-R))); 
*/

#include<stdio.h>

//Creating a factorial function
long long factorial(int a)
{
    int j,fact=1; //Declaration
    for(j=1;j<=a;j++)
    {
        fact *=j;
    }
    return fact; // Returns factorial
}

int ncr(int n,int r)
{
    double nCr;
    nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}

int main()
{
    int n,r;
    double nCr;

    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);

    nCr = ncr(n,r);

    printf("Enter the value of nCr is: %.0lf",nCr);
}