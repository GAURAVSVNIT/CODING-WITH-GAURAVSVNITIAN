#include <stdio.h>

// Function to solve Tower of Hanoi problem
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n; // Number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n); // Read the number of disks from the user
    towerOfHanoi(n, 'A', 'C', 'B'); // Call the function to solve Tower of Hanoi
    return 0; // Return 0 to indicate successful execution
}