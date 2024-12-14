//95) Declare a Structure with Data Members Employee Number, Employee Name, and Basic Pay
#include <stdio.h>
// Define a structure to hold employee details
struct Employee {
    int empNumber;
    char empName[100];
    float basicPay;
};

int main() {
    struct Employee employ[50]; // Declare an array of 50 employees
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Read employee details
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employ[i].empNumber);
        printf("Employee Name: ");
        scanf("%s", employ[i].empName);
        printf("Basic Pay: ");
        scanf("%f", &employ[i].basicPay);
    }

    // Print employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee Number: %d\n", employ[i].empNumber);
        printf("Employee Name: %s\n", employ[i].empName);
        printf("Basic Pay: %.2f\n", employ[i].basicPay);
    }

    return 0;
}
