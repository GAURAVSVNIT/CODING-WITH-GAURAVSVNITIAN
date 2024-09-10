//23. PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER
//FILE(<MATH.H>).

#include <stdio.h>

int main()
{
    int a,i,b,c=1;

     printf("Enter the Exponent :");
     scanf("%d",&a);

     printf("Enter the Power :");
     scanf("%d",&b);
    
for(i=1;i<=b;i++)
{
    c=c*a;
}

printf("The Answer is : %d",c);




    return 0;
}