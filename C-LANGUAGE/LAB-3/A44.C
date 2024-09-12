// 44. WRITE A PROGRAM IN C FOR THE FOLLOWING.
//  AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
//  FOLLOWS.

// Consumption in unit Rate for Charge
// 0-200 Re 0.50 per uniy
// 210-400 Rs. 100 plus Re 0.65 per unit excess of 200
// 401-600 Rs. 230 plus Re 0.80 per unit excess of
// 400
// Above 600 Rs. 425 plus Rs. 125 per unit excess of
// 600
//  Print the amount to be paid by the consumer.

#include <stdio.h>

int main() {
    int units;
    float amount;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the amount based on the number of units
    if (units <= 200) {
        amount = 0.50 * units;
    } else if (units <= 400) {
        amount = 100 + 0.65 * (units - 200);
    } else if (units <= 600) {
        amount = 230 + 0.80 * (units - 400);
    } else {
        amount = 425 + 1.25 * (units - 600);
    }

    // Output the amount to be paid
    printf("The amount to be paid is: Rs. %.2f\n", amount);

    return 0;
}