// 3. Create a Structure called BankMgmt with AccNumber, CustName, AvlBalance,
// AccType as members. Implement a Bank management Application as menu driven
// program for the above said Structure scenario.
// Menu Option:
// 1. Withdrawal 2. Deposit 3. Display Balance 4. Exit
// If option
// 1 is chosen- Amount can be withdrawn from the account (Withdrawn amount
// should be given as input). For withdrawal the condition is- the AvlBalance must be
// greater than withdrawn amount).
// 2 is chosen- Amount can be deposited to the account (the deposited amount
// should be given as input). The deposited amount should be reflected in AvlBalance of
// the account.
// 3 is chosen- Current available balance (AvlBalance) of the AccNumber should
// be Displayed with other details
// 4 is chosen- Exit from the application
// Sample Input:
// SB 100155 VenkatKrishna 4500.00 Saving

# include<stdio.h>
# include<stdlib.h>

typedef struct BankMgmt
{
    int AccNumber;
    char CustName[50];
    float AvlBalance;
    char AccType[50];
}BankMgmt;

void Withdrawal(BankMgmt *b)
{
    float amount;
    printf("Enter the amount to be withdrawn: ");
    scanf("%f", &amount);
    if(amount > b->AvlBalance)
    {
        printf("Insufficient Balance\n");
    }
    else
    {
        b->AvlBalance -= amount;
        printf("Amount Withdrawn Successfully\n");
    }
}

void Deposit(BankMgmt *b)
{
    float amount;
    printf("Enter the amount to be deposited: ");
    scanf("%f", &amount);
    b->AvlBalance += amount;
    printf("Amount Deposited Successfully\n");
}

void DisplayBalance(BankMgmt *b)
{
    printf("Account Number: %d\n", b->AccNumber);
    printf("Customer Name: %s\n", b->CustName);
    printf("Available Balance: %.2f\n", b->AvlBalance);
    printf("Account Type: %s\n", b->AccType);
}

int main()
{
    BankMgmt b;
    int choice;
    printf("Enter Account Number: ");
    scanf("%d", &b.AccNumber);
    printf("Enter Customer Name: ");
    scanf("%s", b.CustName);
    printf("Enter Available Balance: ");
    scanf("%f", &b.AvlBalance);
    printf("Enter Account Type: ");
    scanf("%s", b.AccType);
    while(1)
    {
        printf("Menu Option:\n1. Withdrawal\n2. Deposit\n3. Display Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                Withdrawal(&b);
                break;
            case 2:
                Deposit(&b);
                break;
            case 3:
                DisplayBalance(&b);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}