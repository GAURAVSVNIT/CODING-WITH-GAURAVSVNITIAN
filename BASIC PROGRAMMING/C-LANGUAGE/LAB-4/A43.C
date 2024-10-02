// 43. WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
// REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
//  If sales<=Rs. 500, commission is 5%
//  If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
//  If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
//  If sales>5000, commission is 12.5%

#include <stdio.h>

int main() {
    float sales, commission;

    // Input the sales amount
    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    // Calculate commission based on sales amount
    if (sales <= 500) {
        commission = 0.05 * sales;
    } else if (sales <= 2000) {
        commission = 35 + 0.10 * (sales - 500);
    } else if (sales <= 5000) {
        commission = 185 + 0.12 * (sales - 2000);
    } else {
        commission = 0.125 * sales;
    }

    // Output the commission
    printf("The commission is: Rs. %.2f\n", commission);

    return 0;
}