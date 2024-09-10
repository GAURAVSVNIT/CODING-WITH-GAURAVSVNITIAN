// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT

#include <stdio.h>
int main()
{
    int n,i,a,sum=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    
    for(i=1;i!=0;i++)
    {
      a=n%10;
      sum=sum*10+a;
      n=n/10;
    }






    return 0;
}