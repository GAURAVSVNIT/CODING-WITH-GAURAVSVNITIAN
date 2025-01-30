// Q3: Given a singly linked list of n nodes, detect if it contains a loop or not.

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Node 
{
private:
    int data;
    Node *next;
    Node *prev;
public:
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    friend class LinkedList;
};


class LinkedList 
{
private:
    Node *head;
public:

bool detectLoop() {
        if (head == NULL) return false;

        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) 
            {
                return true;
            }
        }
        return false;
    }
};
