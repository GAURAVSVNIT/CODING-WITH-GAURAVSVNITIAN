//32. PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .

 #include <stdio.h>
#include <limits.h>

int main() {
    int N, i;
    int num;
    int max = INT_MIN, second_max = INT_MIN;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("The number of elements should be at least 2.\n");
        return 1; // Exit the program with an error code
    }

    // Read the first number to initialize max and second_max
    printf("Enter element 1: ");
    scanf("%d", &num);
    max = num;
    second_max = INT_MIN; // Initialize second_max for comparison

    // Process the remaining numbers
    for (i = 1; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num);

        if (num > max) {
            second_max = max;
            max = num;
        } else if (num > second_max && num < max) {
            second_max = num;
        }
    }

    if (second_max == INT_MIN) {
        printf("There is no second maximum value.\n");
    } else {
        printf("Maximum value: %d\n", max);
        printf("Second maximum value: %d\n", second_max);
    }

    return 0;
}
