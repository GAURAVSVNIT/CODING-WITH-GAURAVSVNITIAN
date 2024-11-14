// 80. WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15.

#include<stdio.h>

int fibo(int a,int b)
{
    int c,i,n;
    
    // Initialization of all variables
    printf("Enter till how many terms required:");
    scanf("%d",&n);
    printf("\n%d",a); 
    printf("\n%d",b); // Printing the initial two terms 

    //For loop to print after terms
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
}
int main()
{
    int a,b; //Declaration

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
  
    fibo(a,b);

    return 0;
}