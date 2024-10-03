//64) PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.

#include <stdio.h>  

int main()
{
    int a[3][3],i,j, sum=0;
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
    printf("Sum of all rows:\n");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
    return 0;
}