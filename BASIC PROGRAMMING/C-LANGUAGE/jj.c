// TO PRINT ALPHABET TRIANGLE
//  #include <stdio.h>

// int main()
// {
//     int p=0,c[10],a[10],b[10],i,j;
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
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",c[i]);
//     }
// }

// int main()
// {
//     int b[3][3],a[3][3],c[3][3],k,i,j,res=0;
//     printf("Enter 9 elements in 3*3 matrix\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("Enter element (%d,%d): ",i+1,j+1);
//             scanf("%d",&a[i][j]);
//         }
//     }

//     printf("Enter 9 elements in 3*3 matrix\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("Enter element (%d,%d): ",i+1,j+1);
//             scanf("%d",&b[i][j]);
//         }
//     }

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//           for(k=0;k<3;k++)
//           res+=a[i][k]*b[k][j];
//         }
//     }

//     printf("\nMatrix is:\n");
//     for(i=0;i<3;i++)
//     {
//         printf("\n");
//         for(j=0;j<3;j++)
//         {
//             printf("%d   ",c[i][j]);
//         }
//         printf("\n");
//     }

// }

// # include <stdio.h>

// int main()
// {
//     if(0.1+0.2==0.3)
//     {
//         printf("True\n");
//     }
//     else
//     {
//         printf("False\n");
//     }
//     return 0;
//     }
// #include <stdio.h>

// int main() {
//     int a = 256;
//     int b = 256;

//     // Check if a and b are the same object in memory
//     if (&a == &b) {
//         printf("a and b are the same object.\n");
//     } else {
//         printf("a and b are different objects.\n");
//     }

//     a = 257;
//     b = 257;

//     // Check again after changing the values
//     if (&a == &b) {
//         printf("a and b are still the same object.\n");
//     } else {
//         printf("a and b are now different objects.\n");
//     }

//     return 0;
// }

// # include <stdio.h>

// int main()
// {
//     if(70 == 070)
//     {
//         printf("True\n");
//     }
//     else
//     {
//         printf("False\n");
//     }
//     return 0;

// }
// #include <stdio.h>
    
    // int main()
    // {
    //     int i, arr[10];
    
    //     // Populate the array with alternating values of 1 and -1
    //     for (i = 0; i < 10; i++)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             arr[i] = 1;
    //         }
    //         else
    //         {
    //             arr[i] = -1;
    //         }
    //     }
    
    //     // Print the array
    //     for (i = 0; i < 10; i++)
    //     {
    //         printf("\t %d", arr[i]);
    //     }
    
    //     return 0;
    // }
//     for (i = 0; i < 10; i++)
//         arr[i * 2] = 1;
//         arr[i * 2 + 1] = -1;
//     for (i = 0; i < 10; i++)
//         printf("\t %d", arr[i]);

//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int i=0;
//     if(i==1)
//       if(i==2)
//          printf("Hello\n");
//       else
//          printf("World\n");
// }
// #include <stdio.h>
// int main()
// {
//   short i= 10;
//   char c=97;
//   printf("%d\n",sizeof(i));
  
//   printf("%d\n",sizeof(c));
//   printf("%d\n",sizeof(c+i));
//   return 0;
// }
// int main( ) 
// { 
//  int b[ ] = { 10, 10, 30, 40, 50 } ; 
//  int i ; 
//  for ( i = 0 ; i <= 4 ; i++ ) 
//  printf ( "\n%d", *( b + i ) ) ; 
//  return 0 ; 
// }

// # include <stdio.h>

// int main()
// {
//     int i, arr[10];
//     for (i = 0; i < 10; i++)
//     {
//         arr[i * 2] = 1;
//     }
   
//     for (i = 0; i < 10; i++)
//     {
//         arr[i * 2 + 1] = -1;
//     }
//     for (i = 0; i < 10; i++)
//     {
//         printf("\t %d", arr[i]);
//     }

//     return 0;
// }
// # include <stdio.h>
//  int main()
//  {
     
//      for(int n=0;n<5;n++)
//      {    
//         int n=10;
//          printf("%d ",n);
//          n++;
//      }
//      return 0;
// }  

// #include<stdio.h>
// int main()
// {
//      int i[7]={0};
//      for(int j=0;j<7;j++)
//      {
// 	   printf("%d ",i[j]);
     	
// 	 }
//      printf("%d ",i[7]);
     
// 	return 0;
// }
// #include <stdio.h>

 

// // Driver code

// int main()

// {

//     int i, j,k=65, rows = 4;

 

//     for (i = 1; i <= rows; i++) 

//     {

//         // Loop to print the blank spaces

//         for (j = 1; j < i; j++) 

//         {

//             printf(" ");

//         }

//     // Loop to print the stars

//         for (j = 1; 

//              j <= (rows * 2 - (2 * i - 3)); j++) 

//         {

//             printf("%c",k);
//             k+=2;

//         }

 

//         // Move to the next line to 

//         // complete the pattern

//         printf("\n");

//     }

 

//     return 0;

// }

// #include <stdio.h>

// int main()
// {
//     int i, j;
//     char ch = 'A';

//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int i, j, k=65,n=4;
    
// //     for (i = 5; i >= 1; i--)
// //     {
// //         k = 1;
// //         for (j = 1; j <= i; j++)
// //         {
// //             printf("%c ", ch);
// //             ch++;
// //             k++;
// //         }
// //         for (j = 1; j < k; j++)
// //         {
// //             printf("%c ", ch);
// //             ch--;
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }
//  for(i=n-1;i>=1;i--)
//     {
//         for(j=1;j<=n-i;j++)
//         {    
//              printf("  ");
//         }
//         for(j=1;j<=2*i-1;j++)
//         {
//             printf("%c ",k);
//             k+=2;   
//         }
//     printf("\n");
//    }
//     return 0;
//     }
//26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.

// #include <stdio.h>

// int main()

//     {  
//     double a = 4.5, c = 4.9;  
//     float b = 4.6;  
//     int d = 2, result;  

//     result = (int)a % 2 + (double)b * (int)c / d;  
//     printf("result = %d", result);  


//     return 0;

// }
// #include <stdio.h>  

// int main() {  
//     int a[] = {20, 12, 11, 35, 3, 6};  
//     int size = sizeof(a) / sizeof(a[0]);  
//     int e= 0, o= 0;  

//     for (int i = 0; i < size; i += 2) {  
//         printf("%d ", a[i]);  
//         e+= a[i];  
//     }  
//     printf("Sum = %d\n", e);  

    
//     for (int i = 1; i < size; i += 2) { 
//         printf("%d ", a[i]);  
//         o+= a[i];  
//     }  
//     printf("Sum = %d\n", o);  

//     return 0;  
// }


// #include <stdio.h>  
// #include <string.h>  
// #define N 20  

// int main() 
// {  
//     char pass[N];  
//     int i, valid = 1; // Changed x to valid and initialized to 1 for validity check.  

//     printf("Enter a password: ");  
//     scanf("%s", pass); // Removed the '&' since 'pass' is already a pointer.  

//     if (strlen(pass) >= 7) 
//     {  
//         // Loop through each character in the password.  
//         for (i = 0; i < strlen(pass); i++) 
//         {  
//             // Check if each character is lowercase, uppercase, or a digit.  
//             if (!((pass[i] >= 'a' && pass[i] <= 'z') ||   
//                   (pass[i] >= 'A' && pass[i] <= 'Z') ||   
//                   (pass[i] >= '0' && pass[i] <= '9')))  {  
//                 valid = 0; // Set valid to 0 if any character is invalid.  
//                 break; // Exit the loop if an invalid character is found.  
//             }  
//         }  
        
//         // Condition to check if all characters were valid.  
//         if (valid==0)
//         {
//             printf("Success!\n");  
//         } 
//         else 
//         {  
//             printf("Password contains invalid characters.\n");  
//         }  
//     } 
//     else 
//     {  
//         printf("Try Again.. Password must be at least 7 characters long.\n");  
//     }  

//     return 0;  
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     printf("Enter no of strings:");
//     scanf("%d",&n);
//     char arr[n][100];
//     for(int i=0;i<n;i++){
//         scanf("%s",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%s,",arr[i]);
//     }
//     char temp[1][100];
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//             if(strlen(arr[j])<=strlen(arr[i+1])){
//                 temp[0][100]=arr[i];
//                 arr[i][100]=arr[i+1];
//                 arr[i+1][100]=temp[0];
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%s,",arr[i]);
//     }
//     return 0;
// }


