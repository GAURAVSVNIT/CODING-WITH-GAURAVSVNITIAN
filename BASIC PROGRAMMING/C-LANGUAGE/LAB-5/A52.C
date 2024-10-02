#include<stdio.h>
int main()
{   int n;

    printf("Enter the  Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",(i-l));
        }
        printf("\n");
    }
}