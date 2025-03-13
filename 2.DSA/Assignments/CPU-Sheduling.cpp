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
#include <algorithm>

using namespace std;

class Process {
public:
    int processId;
    int priority;
    int arrivalTime;
    int burstTime;

    Process(int pid, int prio, int at, int bt) {
        processId = pid;
        priority = prio;
        arrivalTime = at;
        burstTime = bt;
    }
};

bool compare(Process a, Process b) {
    if (a.priority == b.priority) 
        return a.arrivalTime < b.arrivalTime;
    return a.priority < b.priority;
}

void priorityScheduling(vector<Process>& processes) {
    int n = processes.size();
    vector<Process> readyQueue;
    int currentTime = 0;

    
    for (int i = 0; i < n; i++) {
        if (processes[i].arrivalTime == 0) {
            readyQueue.push_back(processes[i]);
            processes.erase(processes.begin() + i);
            break;
        }
    }


    sort(processes.begin(), processes.end(), compare);

    cout << "CPU Scheduling Order:" << endl;

    while (!readyQueue.empty()) {
        Process currentProcess = readyQueue.front();
        readyQueue.erase(readyQueue.begin());

        cout << "Process ID: " << currentProcess.processId << " is scheduled at time " << currentTime << "s." << endl;
        currentTime += currentProcess.burstTime;  

        
        for (int i = 0; i < processes.size(); i++) {
            if (processes[i].arrivalTime <= currentTime) {
                readyQueue.push_back(processes[i]);
                processes.erase(processes.begin() + i);
                i--; 
            }
        }

        
        sort(readyQueue.begin(), readyQueue.end(), compare);
    }
}

int main() {
    vector<Process> processes = {
        Process(1, 2, 0, 5),
        Process(2, 1, 1, 3),
        Process(3, 3, 2, 4)
    };

    priorityScheduling(processes);

    cout<<"\n\n";
    return 0;
}
