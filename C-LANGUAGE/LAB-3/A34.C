//34. PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)

#include <stdio.h>

int main()
{
    int n,i,a,b,c; //Declaring the Variables
    printf("Enter the Number : ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}