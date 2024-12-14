//92) Find the Biggest of Given List of N Integers Using Pointers
#include <stdio.h>

// Function to find the biggest number in an array using pointers
int findBiggest(int *arr, int n) {
    int max = *arr; // Initialize max with the first element
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) { // Compare current element with max
            max = *(arr + i); // Update max if current element is greater
        }
    }
    return max; // Return the biggest number
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read elements into the array
    }

    // Call the function to find the biggest number
    int biggest = findBiggest(arr, n);
    printf("The biggest number is: %d\n", biggest);

    return 0;
}
