// // #include <stdio.h>
// // #include <limits.h>
// // int main()
// // {
// //     int i,n,max,arr[5];
// //      for(i=0;i<5;i++)
// //     {
// //         scanf("%d",&arr[i]);
// //     }
// //     printf("\n");
// //     printf("\n");
// //     printf("%d",sizeof(arr)/sizeof(int));
// //     max=INT_MIN;
// //     printf("\n");
// //     printf("\n");
// //     for(i=0;i<5;i++)
// //     {
// //         if(arr[i]>max)
// //         {
// //             max=arr[i];
// //         }
// //     }
// //     printf("%d",max);

// //     return 0;
// // }
// #include <stdio.h>

// int main() {
//     int a[3][3], i, j;

//     // Input matrix elements
//     printf("Enter 9 elements for a 3x3 matrix:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("Enter element (%d,%d): ", i + 1, j + 1);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Display the matrix with a box around it
//     printf("\nMatrix is:\n");
//     printf("+-----+-----+-----+\n");  // Top border
//     for (i = 0; i < 3; i++) {
//         printf("|");
//         for (j = 0; j < 3; j++) {
//             printf(" %2d |", a[i][j]);  // Print each element
//         }
//         printf("\n");  // Row border

        
//     } 
//         printf("+-----+-----+-----+\n");  // Row border

//     // Calculate and print the sum of each row
//     printf("Sum of all rows:\n");
//     for (i = 0; i < 3; i++) {
//         int sum = 0;  // Initialize sum for each row
//         for (j = 0; j < 3; j++) {
//             sum += a[i][j];  // Accumulate the sum
//         }
//         printf("Sum of row %d = %d\n", i + 1, sum);
//     }

//     return 0;
// }

// 

// #include <stdio.h>
// power(int a,int b)
// {
//     if(b==0)
//     {
//         return 1;
//     }
//     else 
//     {
//         return a*power(a,b-1);
//     }
// }
// int main()
// {
//     int a,b,c;
//     printf("Enter the Number :");
//     scanf("%d",&a);
//     printf("Enter the Power :");
//     scanf("%d",&b);
//     c=power(a,b);
//     printf("The Answer is : %d",c);
//     return 0;
// }
// #include <stdio.h>
// fibonacci(int a,int b,int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else 
//     {
//         printf("%d ",a+b);
//         return fibonacci(b,a+b,n-1);
//     }
// }
// // 
// int main()
// {
//     int i=1024;
//     for(;i;i>>=1)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }
// int main(){
// int a=10,b=5,c=5,d;
// d=b+c==a;
// printf("%d",d);
// return 0;
// }