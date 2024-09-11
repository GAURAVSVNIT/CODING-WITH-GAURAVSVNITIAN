//30 .PROGRAM TO REVERSE OF A GIVEN NO

#include <stdio.h>
int main()
{
    int n,i,a,sum=0;
    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i=1;n!=0;i++)
    {
      a=n%10;
      sum=sum*10+a;
      n=n/10;
    }

      printf("The Reverse of Number is : %d",sum);
    
  
    return 0;
}