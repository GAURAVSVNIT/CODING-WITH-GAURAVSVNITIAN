//26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.

#include <stdio.h>
int main()
{
    int i,sum_e=0,sum_o=0,n;
    printf("Enter the Number: ");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i%2==0)
    {
        sum_e=sum_e+i;
    }

    else if(i%2!=0)
    {
        sum_o=sum_o+i;
    }
}


printf("THE SUM IS %d \n",sum_e);
printf("THE SUM IS %d",sum_o);
    return 0;
}