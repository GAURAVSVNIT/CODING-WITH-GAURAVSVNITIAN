// 87) WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
// INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATER THAN 500. (PASSING
// ARRAY OF STRUCTURE INTO FUNCTION).

#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[100];
    int roll_no;
    int marks;
};

// Function to read student information
void readStudentInfo(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read the name of the student
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no); // Read the roll number of the student
        printf("Marks: ");
        scanf("%d", &students[i].marks); // Read the marks of the student
    }
}

// Function to display student information with marks greater than 500
void displayHighScorers(struct Student students[], int n) {
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s\n", students[i].name); // Display the name of the student
            printf("Roll No: %d\n", students[i].roll_no); // Display the roll number of the student
            printf("Marks: %d\n", students[i].marks); // Display the marks of the student
            printf("\n");
        }
    }
}

int main() {
    struct Student students[10]; // Declare an array of 10 students

    // Read and display student information
    readStudentInfo(students, 10); // Call the function to read student information
    displayHighScorers(students, 10); // Call the function to display high scorers

    return 0; // Return 0 to indicate successful execution
}
