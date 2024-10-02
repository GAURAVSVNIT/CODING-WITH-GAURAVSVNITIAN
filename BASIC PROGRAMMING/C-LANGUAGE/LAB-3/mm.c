// 
// //25. PROGRAM TO PRINT TABLE OF ANY NO.

// #include <stdio.h>

// int main()
// {

//     int i,n; // Declaring the Variables
//     printf("Enter the Number");//Enter the Number whose table wanted to be print
//     scanf("%d",&n);

// for(i=1;i<=10;i++)
// {
//     printf("%d x %d = %d \n",n,i,n*i);//Table of Number entered will be printed
// }

// return 0;

// }
 
#include <stdio.h>
#include <limits.h>

int main()
{
    int i,n,max,arr[10]={1,2,3,4,5,6,67,8,9,10}; // Declaring the Variables
    n=sizeof(arr)/sizeof(int);
    max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    printf("%d\n",max);
    return 0;
}