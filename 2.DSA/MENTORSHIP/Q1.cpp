// It’s your final year at SVNIT, Surat, and you’ve heard whispers about a secret student society known as "The Linked Order". This elite group is rumored to control everything from hostel room allocations to secret midnight food deliveries from the best street vendors in Surat. However, entry to this group is not easy. One evening, after finishing your assignments in Lecture Hall Complex (LHC), you find an anonymous note slipped under your hostel room door. The note contains a peculiar challenge: “To prove your worth, you must solve the Linked List Puzzle. The key to our secret lies in reordering the chain.” The challenge involves a special doubly linked list that represents a hidden network of students in the society. Each node in the list contains a student's unique ID and their priority rank (lower values mean higher priority). However, some links in the list are mysteriously corrupted, making the order incorrect.

// The Puzzle

// You are given a doubly linked list where: ● Each node contains three values: ○ id — Unique student ID. ○ rank — Rank of the student (lower means higher priority). ○ next_id (or -1 if null). ○ prev_id (or -1 if null). ● The list may not be sorted based on rank due to corruption. ● Some nodes may incorrectly point to the wrong previous or next nodes, causing cycles or incorrect connections. Your task is to restore the correct order of the list by: 1. Fixing any broken links to remove cycles or incorrect connections. 2. Sorting the list in ascending order based on rank (i.e., highest priority first). 3. Ensuring all prev and next pointers are correctly assigned after sorting.

// Once you solve this puzzle and print the corrected list in order, a mysterious email from the SVNIT Linked Order will arrive with further instructions...

// Input Format

// ● The first line contains an integer N (1 ≤ N ≤ 10⁵), the number of students (nodes in the list).

// ● The next N lines contain four space-separated integers:

// ○ id — Unique student ID.

// ○ rank — Rank of the student (lower means higher priority).

// ○ next_id (or -1 if null).

// ○ prev_id (or -1 if null).

// ● The IDs do not necessarily appear in sorted order, and some next_id or prev_id may incorrectly form a cycle or break the list structure.

// Constraints

// (1 ≤ id ≤ 10⁶) (1 ≤ rank ≤ 10⁶)

// Output Format

// Print the IDs of students in correct order after sorting based on priority and fixing the broken linked list.

// Sample Input 0

// 5   
// 101 3 102 -1   
// 102 1 103 101   
// 103 4 -1 102   
// 104 2 105 -1   
// 105 5 -1 104
// Sample Output 0

// 102 104 101 103 105
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int id;
    int rank;
    Node* next;
    Node* prev;
};

class LinkedList{
    Node* head;
    Node* tail;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }

    void insert(int id, int rank){
        Node* newNode = new Node();
        newNode->id = id;
        newNode->rank = rank;
        newNode->next = NULL;
        newNode->prev = tail;

        if(tail != NULL){
            tail->next = newNode;
        } else {
            head = newNode;
        }
        tail = newNode;
    }

    void fixAndSort(){

        if(head == NULL) return;

        vector<Node*> nodes;
        Node* current = head;
        while(current != NULL){
            nodes.push_back(current);
            current = current->next;
        }

        sort(nodes.begin(), nodes.end(), [](Node* a, Node* b){
            return a->rank < b->rank;
        });

        for(int i = 0; i < nodes.size(); i++){
            nodes[i]->next = (i + 1 < nodes.size()) ? nodes[i + 1] : NULL;
            nodes[i]->prev = (i - 1 >= 0) ? nodes[i - 1] : NULL;
        }

        head = nodes[0];
        tail = nodes[nodes.size() - 1];
    } 


    void printList(){
        Node* current = head;
        while(current != NULL){
            cout << current->id << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main(){
    int n;
    cin >> n;
    LinkedList list;
    for(int i = 0; i < n; i++){
        int id, rank, next_id, prev_id;
        cin >> id >> rank >> next_id >> prev_id;
        list.insert(id, rank);
    }
    list.fixAndSort();
    list.printList();
    return 0;
}