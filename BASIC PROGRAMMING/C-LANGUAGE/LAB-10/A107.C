// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>

// // Function to flip the last 'num' digits of the number 'No'
// void store_digit(int *No, int num);

// int main()
// {
//     int N, F;
//     printf("Enter the number: ");
//     scanf("%d", &N); // Read the number from the user

//     printf("\nEnter how many digits to flip from last: ");
//     scanf("%d", &F); // Read the number of digits to flip

//     store_digit(&N, F); // Call the function to flip the digits

//     return 0;
// }

// void store_digit(int *No, int num)
// {
//     int temp;
//     int B[100]; // Array to store the digits
//     int co = 0; // Counter for the number of digits

//     // Extract digits of the number and store them in array B
//     for (int i = 0; i < 100; i++)
//     {
//         B[i] = (*No / pow(10, i)); // Get the i-th digit
//         B[i] = B[i] % 10; // Extract the last digit

//         if (B[i] == 0)
//         {
//             break; // Break if the digit is 0 (end of number)
//         }
//         co++;
//     }

//     // Flip the last 'num' digits in the array B
//     for (int i = 0; i < num / 2; i++)
//     {
//         temp = B[num - 1 - i]; // Swap the digits
//         B[num - 1 - i] = B[i];
//         B[i] = temp;
//     }

//     // Reconstruct the number from the array B
//     *No = 0;
//     for (int i = co - 1; i >= 0; i--)
//     {
//         *No = *No * 10 + B[i]; // Rebuild the number from the digits
//     }

//     printf("The number after flipping the last %d digits is: %d\n", num, *No); // Print the result
// }

#include <stdio.h>
#include <math.h>

// Function to flip the last 'num' digits of the number 'No'
void flip_last_digits(int *No, int num) {
    int temp = *No;
    int flipped = 0;
    int multiplier = pow(10, num);
    int last_digits = temp % multiplier;

    // Flip the last 'num' digits
    while (last_digits > 0) {
        flipped = flipped * 10 + last_digits % 10;
        last_digits /= 10;
    }

    // Combine the flipped digits with the remaining part of the number
    *No = (temp / multiplier) * multiplier + flipped;
}

int main() {
    int N, F;
    printf("Enter the number: ");
    scanf("%d", &N); // Read the number from the user

    printf("Enter how many digits to flip from last: ");
    scanf("%d", &F); // Read the number of digits to flip

    flip_last_digits(&N, F); // Call the function to flip the digits

    printf("The number after flipping the last %d digits is: %d\n", F, N); // Print the result

    return 0;
}