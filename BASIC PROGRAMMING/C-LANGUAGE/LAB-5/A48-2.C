//TO PRINT ALPHABET TRIANGLE USING FOR LOOP
    
 #include <stdio.h> 
 
 int main()
 {
    int i,j,n;

    printf("Enter the Lines : ");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        nsp--;

        for(j=1;j<=nst;j++)
        {
            printf("* ");
        }
        nst=nst+2;
        printf("\n");
    }

 }
 
