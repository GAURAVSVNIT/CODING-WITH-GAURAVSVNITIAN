// // CPU Sheduling using Priority Queue
// // Process Arrival Time Burst Time Priority
// // P1 0 5 2
// // P2 1 3 1
// // P3 2 4 3
// // Scheduling Rule : Lower Priority Value has higher priority
// // if two processes have same priority then the one which arrived scheduled first
// // Non Preemptive   CPU Scheduling 
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int processId;
//     int priority;
//     int arrivalTime;
//     int burstTime;
//     Node* next;

//     Node(int processId, int priority, int arrivalTime, int burstTime) {
//         this->processId = processId;
//         this->priority = priority;
//         this->arrivalTime = arrivalTime;
//         this->burstTime = burstTime;
//         this->next = NULL;
//     }
// };

// class PriorityQueue {
// public:
//     Node* front;

//     PriorityQueue() {
//         front = NULL;
//     }

//     void enqueue(int processId, int priority, int arrivalTime, int burstTime) {
//         Node* newNode = new Node(processId, priority, arrivalTime, burstTime);

//         if (isEmpty()) {
//             front = newNode;
//             return;
//         }

//         Node* temp = front;
//         Node* prev = NULL;

//         while (temp != NULL && (temp->priority < priority || (temp->priority == priority && temp->arrivalTime <= arrivalTime))) {
//             prev = temp;
//             temp = temp->next;
//         }

//         if (prev == NULL) {
//             newNode->next = front;
//             front = newNode;
//         } else {
//             prev->next = newNode;
//             newNode->next = temp;
//         }
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty" << endl;
//             return;
//         }

//         Node* temp = front;
//         front = front->next;
//         delete temp;
//     }

//     bool isEmpty() {
//         return front == NULL;
//     }

//     void display() {
//         Node* temp = front;
//         while (temp != NULL) {
//             cout << "Process ID: " << temp->processId << ", Priority: " << temp->priority << ", Arrival Time: " << temp->arrivalTime << ", Burst Time: " << temp->burstTime << endl;
//             temp = temp->next;
//         }
//     }

//     Node* getFront() {
//         return front;
//     }
// };

// int main() {
//     PriorityQueue pq;

//     pq.enqueue(1, 2, 0, 5); 
//     pq.enqueue(2, 1, 1, 3); 
//     pq.enqueue(3, 3, 2, 4);

//     cout << "Processes in the priority queue:" << endl;
//     pq.display();

//     cout << "\nCPU Scheduling Order:" << endl;
//     while (!pq.isEmpty()) {
//         Node* process = pq.getFront();
//         cout << "Process ID: " << process->processId << " is scheduled." << endl;
//         pq.dequeue();
//     }

//     return 0;
// }    



#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

// 
int main ()
{
    if("Manav" < "Gaurav")
    {
        cout << "Manav is smaller than Gaurav" << endl;
    }
    else
    {
        cout << "Gaurav is smaller than Manav" << endl;
    }    
}