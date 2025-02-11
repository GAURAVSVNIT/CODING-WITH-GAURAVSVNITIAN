#include <iostream>
using namespace std;

// Node structure for the polynomial
struct Node {
    int coeff;
    int power;
    Node* next;
};

// Function to insert a node at the end of the linked list
void insert(Node*& head, int coeff, int power) {
    Node* newNode = new Node{coeff, power, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Function to display the polynomial
void display(Node* head) {
    while (head) {
        cout << head->coeff << "x^" << head->power;
        head = head->next;
        if (head) cout << " + ";
    }
    cout << endl;
}

// Function to add two polynomials represented by linked lists
Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = nullptr;
    while (poly1 && poly2) {
        if (poly1->power > poly2->power) {
            insert(result, poly1->coeff, poly1->power);
            poly1 = poly1->next;
        } else if (poly1->power < poly2->power) {
            insert(result, poly2->coeff, poly2->power);
            poly2 = poly2->next;
        } else {
            insert(result, poly1->coeff + poly2->coeff, poly1->power);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1) {
        insert(result, poly1->coeff, poly1->power);
        poly1 = poly1->next;
    }
    while (poly2) {
        insert(result, poly2->coeff, poly2->power);
        poly2 = poly2->next;
    }
    return result;
}

int main() {
    Node* poly1 = nullptr;
    Node* poly2 = nullptr;
    int n, coeff, power;
    
    cout << "Enter the number of terms for the first polynomial: ";
    cin >> n;
    cout << "Enter the terms (coefficient and power):\n";
    for (int i = 0; i < n; i++) {
        cin >> coeff >> power;
        insert(poly1, coeff, power);
    }
    
    cout << "Enter the number of terms for the second polynomial: ";
    cin >> n;
    cout << "Enter the terms (coefficient and power):\n";
    for (int i = 0; i < n; i++) {
        cin >> coeff >> power;
        insert(poly2, coeff, power);
    }
    
    cout << "First Polynomial: ";
    display(poly1);
    
    cout << "Second Polynomial: ";
    display(poly2);
    
    Node* result = addPolynomials(poly1, poly2);
    cout << "Resultant Polynomial: ";
    display(result);
    
    return 0;
}
