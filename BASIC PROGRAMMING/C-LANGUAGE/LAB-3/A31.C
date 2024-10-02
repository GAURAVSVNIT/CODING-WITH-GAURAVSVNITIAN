//31. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.

#include <stdio.h>
int main()
{
    int n,i,a,sum=0;
    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i=1;n!=0;i++)
    {
      a=n%10;
      sum=sum+a;
      n=n/10;
    }

      printf("The Sum of Number is : %d",sum);
    
  
    return 0;
}