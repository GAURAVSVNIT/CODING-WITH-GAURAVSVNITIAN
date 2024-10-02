#include <stdio.h>
int main()
{
   int b[3][3],a[3][3],c[3][3],i,j;
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
    }