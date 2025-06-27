#include <iostream>
#include <queue>

using namespace std;

void reverseQueue(queue<int> &q) {
    queue<int> q1, q2;
    
    // Step 1: Move all elements to q1
    while (!q.empty()) {
        q1.push(q.front());
        q.pop();
    }

    // Step 2: Transfer elements back in reversed order using q2
    while (!q1.empty()) {
        // Move all but the last element of q1 to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Move the last remaining element from q1 to the original queue
        q.push(q1.front());
        q1.pop();

        // Swap q1 and q2 for the next iteration
        swap(q1, q2);
    }
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    
    // Insert elements
    for (int i = 1; i <= 5; i++)
        q.push(i);
    
    cout << "Original Queue: ";
    printQueue(q);
    
    // Reverse the queue
    reverseQueue(q);
    
    cout << "Reversed Queue: ";
    printQueue(q);
    
    return 0;
}
