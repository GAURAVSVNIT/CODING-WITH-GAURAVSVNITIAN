//25. PROGRAM TO PRINT TABLE OF ANY NO.

#include <stdio.h>

int main()
{
    int i,n; // Declaring the Variables
    printf("Enter the Number");//Enter the Number whose table wanted to be print
    scanf("%d",&n);


for(i=1;i<=10;i++)
{
    printf("%d x %d = %d \n",n,i,n*i);//Table of Number entered will be printed
}

return 0;
}