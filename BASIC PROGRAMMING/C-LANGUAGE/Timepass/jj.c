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


// # include <stdio.h>
// # include<string.h>
// int main()
// {
//     char str[100],san[100][100];
//     int i=0,j=0,k,minLen = 100, maxLen = 0;
//     printf("Enter the string :");
//     gets(str);
    
//     for(k=0;str[k]!='\0';k++)
//     {
//         if(str[k]==' ')
//         {
//             san[i][j]='\0';
//             i++;
//             j=0;
//         }

//         else
//         {
//             san[i][j]=str[k];
//             j++;
//         }
//     }

//     san[i][j]='\0';
//     char* minWord = san[0];
//     char* maxWord = san[0];

//     for (k = 0; k <= i; k++) 
//     {
//         int len = strlen(san[k]);
//         if (len < minLen) 
//         {
//             minLen = len;
//             minWord = san[k];
//         }
//         if (len > maxLen) 
//         {
//             maxLen = len;
//             maxWord = san[k];
//         }
//     }
//     printf("The largest word is %s and smallest word is %s", maxWord, minWord);
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100],wor[100],lon[100];
//     int i=0,j=0,k;
//     printf("Enter the string :");
//     gets(str);
//     printf("The Sentence is :");
//     puts(str);    
//     i=strlen(str);
//     j=0;
//     while(i<1)
//     {
//         char ch = str[i];
//         if(ch==' ' || ch=='\n')
//         {
//         strcpy(lon,wor);
//         }
//         strcpy(wor,"");
//         if(j==0)
//         {
//         lon[j]=ch;
//         j++;
//         }
//         else
//         {
//         wor[j]=ch;
//         j++;
//         }
//         i++;
//     }
//     printf("The Longest word is ");
//     puts(lon);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100], wor[100], lon[100];
//     int i = 0, j = 0, k;
//     printf("Enter the string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("The Sentence is: ");
//     puts(str);

//     i = strlen(str);
//     j = 0;

//     while (i >= 0) {
//         char ch = str[i];
//         if (ch == ' ' || ch == '\n') 
//         {
//             wor[j] = '\0'; 
//             if (j > strlen(lon)) 
//             {
//                 strcpy(lon, wor);
//             }
//             j = 0;
//         } 
//         else 
//         {
//             wor[j] = ch;
//             j++;
//         }
//         i--;
//     }

//     printf("The Longest word is: ");
//     puts(lon);

//     return 0;
// }

// #include <stdio.h>

// int isFibo(int n) 
// {
//     int a = 0, b = 1, c;
//     while (a <= n) 
//     {
//         if (a == n) 
//         {
//             return 1; // Is a Fibonacci number
//         }
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0; // Not a Fibonacci number
// }

// int main() 
// {
//     int t, n;

//     printf("Enter the number of test cases: ");
//     scanf("%d", &t);

//     while (t--) 
//     {
//         printf("Enter the number: ");
//         scanf("%d", &n);
//         if (isFibo(n)) 
//         {
//             printf("IsFibo\n");
//         } 
//         else 
//         {
//             printf("IsNotFibo\n");
//         }
//     }

//     return 0;
// }

// # include <stdio.h>
// # include <string.h>

// int main()
// {
//     char str[584];
//     int l=strlen(str);
//     printf("\n%d",l);
//     printf("\n%s",str[1]);
//     printf("\n%c",str[0]);
//     printf("\n%c",str[2]);
//     printf("\n%c",str[3]);
//     printf("\n%c",str[4]);
//     printf("\n%c",str[5]);
//     printf("\n%c",str[6]);
//     printf("\n%c",str[7]);
//     printf("\n%c",str[8]);
//     printf("\n%c",str[10]);
// }
// #include <stdio.h>

// int main() {
//     int arr[] = {4, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int i, j, temp;

//     printf("Original array: \n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1 ; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: \n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     printf("%d", arr[7]);

//     return 0;
// }
// # include <stdio.h>

// int main() 
// {
//     int n1,n2, *ptr1, *ptr2,sum;
//     n1=10;
//     n2=20;
//     ptr1 = &n1;
//     ptr2 = &n2;
//     sum = *ptr1 + *ptr2;
//     printf("%d",sum);
//     return 0;
//}
// # include <string.h>
// # include <stdio.h>

// int main()
// {
//     char str[100]="My name is Gaurav";
//     printf("%d",strlen(strrchr(str,' ')+1));
//     return 0;
    
// }   
#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    printf("Please enter the array length: ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("The first array is :\n");
    for(int i=0;i<=n-1;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("The second array is :\n");
    for(int i=0;i<n;i++)
       {
        scanf("%d",&b[i]);
       } 
    printf("The new array would be\n");   
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        sum+=c[i];
        printf("%d\n",c[i]);
    }   
    avg=sum/3.0;
    printf("The average of the new array is %.2f",avg);
    return 0;  
}