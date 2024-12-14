#include <stdio.h> 
 
 int main()
 {
    int i,j,n;

    printf("Enter the  Number(Between 65 to 90) : ");
    scanf("%d",&n);

    for(i=65;i<=n;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }

        printf("\n");
    }

 }