//TO PRINT ALPHABET TRIANGLE 
#include <stdio.h>

// int main()
// {
//     int p=0,c[20],a[10],b[10],i,j;
//     printf("Enter 10 integers:\n");
    
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("\n");

//     for(j=0;j<10;j++)
//     {
//         scanf("%d",&b[j]);
//     }
//     for(j=0;i<10;j++)
//     {
//         printf("%d ",b[j]);
//     }
//     printf("\n");

//     for(i=0;i<10;i++)
//     {
//        c[p]=a[i];
//        p++;
//     }
//     for(j=0;j<10;j++)
//     {
//        c[p]=b[j];
//        p++;
//     }
//     for(j=0;i<10;j++)
//     {
//         printf("%d ",b[j]);
//     }
//     printf("\n");
//     for(i=0;i<20;i++)   
//     {
//         printf("%d ",c[i]);
//     }
// }

int main()
{
    int b[3][3],a[3][3],c[3][3],k,i,j,res=0;
    printf("Enter 9 elements in 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter 9 elements in 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          for(k=0;k<3;k++)
          res+=a[i][k]*b[k][j];
        }
    }

    printf("\nMatrix is:\n");
    for(i=0;i<3;i++)
    {   
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d   ",c[i][j]);
        }
        printf("\n");
    }


}