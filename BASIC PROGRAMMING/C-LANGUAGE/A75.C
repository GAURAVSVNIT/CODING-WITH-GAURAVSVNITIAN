//75)The annual examination results of 10 students are tabulated as follows:
// Roll No.         Subject1         Subject2         Subject3
// 1                  90               85               96
// 2                  57               73               91
// 3                  97               99               92
// 4                  99               53               86
// 5                  78               67               43
// 6                  81               89               57
// 7                  92               69               88
// 8                  93               96               99
// 9                  94               77               97
// 10                 90               85               96
// Write a program to read the data and determine the following:
// (a) Total marks obtained by each student.
// (b) The highest marks in each subject and the Roll No. of the student who 
// secured it.
// (c) The student who obtained the highest total marks.

#include <stdio.h>
int main()
{
    int data[10][4] = {
                     {1,90,85,86},{2,57,73,91},
                     {3,97,99,92},{4,99,53,86},
                     {5,78,67,43},{6,81,89,57},
                     {7,92,69,88},{8,93,96,99},
                     {9,94,77,97},{10,90,85,66}
                   } ;