// #include <stdio.h>

// int main()
// {
//     int i;  
//     for(i=1;i<=10;i++)
//     {   
//         if(i==5)
//         {   
//             break;
//         }                           
//         printf("%d ",i);
//     }
//     return 0;
// }

//26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.

#include <stdio.h>
int main()
{
    int i,sum_e=0,sum_o=0,n; //Declaring the Variables  
    printf("Enter the Number: "); // Enter the number till which user need to find Sum
    scanf("%d",&n);
for(i=1;i<=n;i++)
{   
    if(i%2==0)
    {
        sum_e=sum_e+i; // Evaluation of Sum of Even Digits
    }   

    else if(i%2!=0)
    {
        sum_o=sum_o+i; // Evaluation of Sum of Odd Digits
    }
}

printf("THE SUM OF EVEN DIGITS IS :%d \n",sum_e);  // Prints the sum of Even Digits
printf("THE SUM OF ODD DIGITS IS %d",sum_o); // // Prints the sum of Odd Digits
    return 0;
}