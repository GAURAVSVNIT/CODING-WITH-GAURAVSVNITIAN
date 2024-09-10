//1. PROGRAM TO CALCULATE SIMPLE INTEREST

#include <stdio.h>

int main()
{
     //Simple interset program
    float principal,rate,time,result;
    
    //User will input the Principal Amount
    printf("Enter the Principal: ");
    scanf("%f",&principal);

    //User will input the Rate of Intrest
    printf("Enter the Rate: ");
    scanf("%f",&rate);

   //User will input the Time to return
    printf("Enter the Time: ");
    scanf("%f",&time);

     result=(principal*time*rate)/100;

    printf("The Simple Intrest is %f",result);

    return 0;
}