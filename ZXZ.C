// // #include <stdio.h>
// // #include <math.h>

// // int main()
// // {
// //     int x;
// //     printf("Enter");
// //     scanf("%d",&x);

// //     switch(x)
// //     {
// //         case 1: 
// //           printf("MONDAY\n");
// //           break;

// //         case 2: printf("TUESDAY\n");
// //           break;


// //         case 3:  printf("WEDNESDAY\n");
// //           break;


// //         case 4:  printf("THURSDAY\n");
// //           break;


// //         case 5:  printf("FRIDAY\n");
// //           break;


// //         case 6:  printf("SATURDAY\n");
// //           break;


// //         case 7:  printf("SUNDAY\n");
// //           break;


// //         default : printf("INVALID");
// //     }




// //     return 0;
// // }


// # include <stdio.h>

// int main() 
// {
//     char _operator;
//     int num1, num2, result;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &_operator);

//     printf("Enter two numbers: \n");
//     scanf("%d  %d", &num1, &num2);

//     // Perform calculation based on the operator
//     switch (_operator) {
//         case '+':
//             printf("The Sum is %d\n",num1+num2);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
//             break;
//         case '/':
//             if (num2 != 0) {
//                 result = num1 / num2;
//                 printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
//             } else {
//                 printf("Error! Division by zero.\n");
//             }
//             break;
//         default:
//             printf("Error! Operator is not correct.\n");
//             break;
//     }

//     return 0;
// 

// #include <stdio.h>
// int main()
// {
//     int n,sumo=0,sume=0,i;
    
//     printf("Enter the Number");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         if(n%2==0)
//         {
//             sume=sume+i;
//         }
//         else if (n%2!=0)
//         {
//              sumo=sumo+i;
//         }
        
            
//         }
        
//         printf(" The sum of No.is :%d \n",sume);
//         printf(" The sum of No.is :%d ",sumo);

//          return 0;

//     }


#include <stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the Number :  g");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j>=n+1)
            {
            printf("* ");
            }

            else
            {
                printf("  ");
            }

        }
             printf("\n");
    }
}



   

