// // 1. You are given a text file, named “students.txt” that contains students’ records. Each Line
// // contains information of a single student in the form of
// <Student Name, Roll No,
// // Department>.
// // A. Read the records from the file into an array of structures.
// // B. Three Options will turn up: (1) Bubble Sort, (2) Binary Search, and (3) Quit. In the
// // following we describe what your C/C++ program will do on Selecting the options.
// // (1) Bubble Sort: Sorts the records based on Student Name. If more than One students has
// // the same name, then sort them on their roll no.
// // (2) Binary Search: Given a student name, the function will return all the Student records
// // <Student Name, Roll No, Department> having the Student name.

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// Structure to store student records
struct Student {
    string name;
    int rollNo;
    string department;
};

// Function to read student records from a CSV file
void readStudents(vector<Student>& students, const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, rollNoStr, department;
        
        // Read name, roll number, department
        getline(ss, name, ',');
        getline(ss, rollNoStr, ',');
        getline(ss, department, ',');

        // Convert roll number from string to integer
        Student s;
        s.name = name;
        s.rollNo = stoi(rollNoStr);
        s.department = department;

        students.push_back(s);
    }
    file.close();
}

// Bubble Sort function (Sorts by Name, then Roll No)
void bubbleSort(vector<Student>& students) {
    int n = students.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].name > students[j + 1].name || 
               (students[j].name == students[j + 1].name && students[j].rollNo > students[j + 1].rollNo)) {
                swap(students[j], students[j + 1]);
            }
        }
    }
    cout << "Records sorted successfully.\n";
}

// Function to display student records
void displayStudents(const vector<Student>& students) {
    for (const auto& s : students) {
        cout << s.name << ", " << s.rollNo << ", " << s.department << endl;
    }
}

// Binary Search function for student name
void binarySearch(const vector<Student>& students, const string& key) {
    int left = 0, right = students.size() - 1;
    bool found = false;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (students[mid].name == key) {
            found = true;
            int i = mid;
            
            // Print left occurrences
            while (i >= 0 && students[i].name == key) {
                cout << students[i].name << ", " << students[i].rollNo << ", " << students[i].department << endl;
                i--;
            }
            
            // Print right occurrences
            i = mid + 1;
            while (i < students.size() && students[i].name == key) {
                cout << students[i].name << ", " << students[i].rollNo << ", " << students[i].department << endl;
                i++;
            }
            break;
        } 
        else if (students[mid].name < key) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    
    if (!found) {
        cout << "No student found with the name '" << key << "'.\n";
    }
}

int main() {
    vector<Student> students;
    readStudents(students, "students.csv");
    
    if (students.empty()) {
        cout << "No student records found.\n";
        return 0;
    }
    
    int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Bubble Sort\n2. Binary Search\n3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To handle newline character from input buffer

        switch (choice) {
            case 1:
                bubbleSort(students);
                cout << "Sorted Student Records:\n";
                displayStudents(students);
                break;
                
            case 2: {
                string searchName;
                cout << "Enter student name to search: ";
                getline(cin, searchName);
                binarySearch(students, searchName);
                break;
            }
                
            case 3:
                cout << "Exiting the program..........\n";
                break;
                
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
