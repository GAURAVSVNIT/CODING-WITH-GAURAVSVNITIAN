//106) Create a Structure Named Item and Implement a User-Defined Function
#include <stdio.h>

// Define a structure to hold item details
struct Item {
    char itemName[100];
    int quantity;
    float price;
    float amount;
};

// Function to read item details and calculate amount
void readItem(struct Item *item) {
    printf("Enter item name: ");
    scanf("%s", item->itemName);
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);
    printf("Enter price: ");
    scanf("%f", &item->price);
    item->amount = item->quantity * item->price;
}

int main() {
    struct Item item;

    // Call the function to read item details and calculate amount
    readItem(&item);

    // Print the item details
    printf("Item Name: %s\n", item.itemName);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);
    printf("Amount: %.2f\n", item.amount);

    return 0;
}
