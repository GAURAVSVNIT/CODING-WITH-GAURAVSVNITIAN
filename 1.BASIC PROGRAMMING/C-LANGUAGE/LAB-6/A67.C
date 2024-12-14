//67) PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM 
//IN THIRD MATRIX.
#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the elements of the matrix 1: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element (%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of the matrix 2: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element (%d,%d): ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The addition of the matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}   