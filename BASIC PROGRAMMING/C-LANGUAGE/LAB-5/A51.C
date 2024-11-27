# include <stdio.h>

int main()
{
    int i, j;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("%d", 1);
            }
            else
            {
                printf("%d", 0);
            }
        }    
        printf("\n");
    
    }    
}