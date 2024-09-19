#include <stdio.h>
int main()
{
    int i,num,check; //Declaring the Variables
    printf("Enter the Number: ");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
       if(num%i==0) 
       check=0;
        break;
    }
    
    if (check==0)
    {
        printf("%d is composite",num);
    }
    else
    {
        printf("%d is prime",num);
    }

    return 0;
}
