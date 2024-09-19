
//28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.

#include <stdio.h>
#include <math.h>

int main()
{
   long int num,count=0,q,org_num,sum=0;

   printf("Enter the Number : ");
   scanf("%ld",&num);
    
   org_num=num;

   fflush(stdin);

   while(num!=0)
   {
     count++;
     num/=10;
   }
    num=org_num;

    while(num!=0)
    {
        q=num%10;
        sum=sum+pow(q,count);
        num/=10;
    }
    
    if(sum==org_num)
    {
        printf("The Number %ld is Armstrong Number",org_num);
    }
    
    else
    {
        printf("The Number %ld is Not Armstrong Number",org_num);
    }
    
    return 0;
}