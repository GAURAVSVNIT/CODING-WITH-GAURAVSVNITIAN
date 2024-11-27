#include <stdio.h> 
 
{
    int n;
    scanf("%d",&n);
    int nsp = n-1;
    int nst = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<nsp;j++)
        {
            printf(" ");
        }
        nsp--;
        for(int j=0;j<nst;j++)
        {
            printf(" *");
        }
        nst++;
        printf("\n");
    }
    return 0;
}