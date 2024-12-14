// 84) WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION

#include <stdio.h>

// Define a structure to store book information
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};

// Function to read book information
void readBookInfo(struct Book *b) {
    printf("Enter the title of the book: ");
    scanf(" %[^\n]", b->title); // Read the title of the book

    printf("Enter the author of the book: ");
    scanf(" %[^\n]", b->author); // Read the author of the book

    printf("Enter the number of pages: ");
    scanf("%d", &b->pages); // Read the number of pages

    printf("Enter the price of the book: ");
    scanf("%f", &b->price); // Read the price of the book
}

// Function to display book information
void displayBookInfo(struct Book b) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", b.title); // Display the title of the book
    printf("Author: %s\n", b.author); // Display the author of the book
    printf("Pages: %d\n", b.pages); // Display the number of pages
    printf("Price: $%.2f\n", b.price); // Display the price of the book
}

int main() {
    struct Book myBook; // Declare a variable of type Book

    // Read and display book information
    readBookInfo(&myBook); // Call the function to read book information
    displayBookInfo(myBook); // Call the function to display book information

    return 0; // Return 0 to indicate successful execution
}