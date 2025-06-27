/*Write a C program to manage the details of students using an array of structures.
The program should:
1. Accept the number of students (n) from the user.
2. For each Student, input the following details:
• Roll number (integer)
• Name (string)
• Marks (floating-point value)
3. Store the details of all students in an array of structures.
4. Display the details of all students in a formatted way.*/
# include <iostream>
# include <String>
using namespace std;

class Student
{
    private:
        int roll_No;
        string name;
        float marks;
    public:
        void getDetails()
        {
            cout << "Enter the Roll Number: ";
            cin >> roll_No;
            cout << "Enter the Name: ";
            cin >> name;
            cout << "Enter the Marks: ";
            cin >> marks;
        }
        void displayDetails()
        {
            cout << "Roll Number: " << roll_No << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
            cout<<endl;
            cout<<"-----------------------------------"<<endl;  
        }
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details of Student " << i + 1 << endl;
        s[i].getDetails();
    }
    cout << "Details of all students: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Details of Student " << i + 1 << endl;
        s[i].displayDetails();
    }
    return 0;
}