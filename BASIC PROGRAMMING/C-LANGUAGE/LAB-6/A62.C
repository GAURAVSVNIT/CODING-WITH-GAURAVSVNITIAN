#include <stdio.h>

int main()
{
    int a[10],i,j;
    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The actual array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    // Reversing the elements
     for(i=0;i<5;i++)
    {
        j=a[i];
        a[i]=a[9-i];
        a[9-i]=j;
        j--;
    }
    printf("The reversed array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;

}   


