//3. PROGRAM TO CALCULATE GROSS SALARY.

#include <stdio.h>

int main() 
{
    // Declare variables
    float BasicSalary, HouseRentAllowance, MedicalAllowance, SpecialAllowance, Deductions, GrossSalary;

    // Input basic salary
    printf("Enter the Basic salary: ");
    scanf("%f", &BasicSalary);

    // Input allowances
    printf("Enter the House Rent Allowance (HRA): ");
    scanf("%f", &HouseRentAllowance);

    printf("Enter the Medical Allowance: ");
    scanf("%f", &MedicalAllowance);

    printf("Enter the Special Allowance: ");
    scanf("%f", &SpecialAllowance);

    // Input deductions
    printf("Enter the total Deductions: ");
    scanf("%f", &Deductions);

    // Calculate gross salary
    GrossSalary = BasicSalary + HouseRentAllowance + MedicalAllowance + SpecialAllowance - Deductions;

    // Output gross salary
    printf("Gross Salary is %f",GrossSalary);

    return 0;
}