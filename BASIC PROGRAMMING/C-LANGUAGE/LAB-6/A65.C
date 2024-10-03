//65) PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
#include <stdio.h>
int main(){
    int a[3][3],i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            printf("Enter the element (%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The actual Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Transpose of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}