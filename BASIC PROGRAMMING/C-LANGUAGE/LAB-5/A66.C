// To Print Transpose of 2-D Array 


#include <stdio.h>
int main()
{
   int a[3][3],i,j,temp;
    printf("Enter 9 elements in 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for(i=0;i<3;i++)
    {   
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
    
    printf("\n The Transpose of Matrix is : \n\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }                

    
    return 0;
}