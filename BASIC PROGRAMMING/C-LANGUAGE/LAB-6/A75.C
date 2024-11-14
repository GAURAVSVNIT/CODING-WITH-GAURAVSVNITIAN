/*
75.  The annual examination results of 10 students are tabulated as follows: 
Roll No.         Subject1         Subject2         Subject3
1                  90               85               96
2                  57               73               91
3                  97               99               92
4                  99               53               86
5                  78               67               43
6                  81               89               57
7                  92               69               88
8                  93               96               99
9                  94               77               97
10                 90               85               66


Write a program to read the data and determine the following: 
(a)Total marks obtained by each student. 
(b)The highest marks in each subject and the Roll No. of the student who secured it. 
(c)The student who obtained the highest total marks.
*/

#include<stdio.h>

// Function to display array elements
void arr_display(int n,int arr[n])
{
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d :%d",i+1,arr[i]);
    }
    printf("\n");
}




int main(){

    int data[10][4] = {
                        {1,90,85,86},{2,57,73,91},
                        {3,97,99,92},{4,99,53,86},
                        {5,78,67,43},{6,81,89,57},
                        {7,92,69,88},{8,93,96,99},
                        {9,94,77,97},{10,90,85,66}
                      };
    
    int total[10];

    //(a)

    for(int i=0;i<10;i++)
    {
        total[i] = data[i][1]+data[i][2]+data[i][3];
    }
    printf("\nThe total student marrks are:\n");
    arr_display(10,total);

    //(b)

    int max1=data[0][1],max2=data[0][2],max3=data[0][3];

    for(int i=0;i<9;i++)
    {
        if(data[i+1][1]>max1)
        {
            max1 = data[i+1][1];
        }
    }
    for(int i=0;i<9;i++)
    {
        if(data[i+1][2]>max2)
        {
            max2 = data[i+1][2];
        }
    }
    for(int i=0;i<9;i++)
    {
        if(data[i+1][3]>max3)
        {
            max3 = data[i+1][3];
        }
    }
    printf("\nHighest marks in subject 1:%d\nHighest marks in subject 2:%d\nHighest marks in subject 3:%d",max1,max2,max3);

    //(c)

    int max_marks = total[0],temp;
    for(int i=0;i<10;i++)
    {
        if(total[i]>max_marks)
        {
            temp = total[i];
            total[i] = max_marks;
            max_marks = temp;
        }
    }
    
    int max_roll;
    for (int i = 0; i < 10; i++)
    {
        if(total[i] == max_marks)
        {
            max_roll = i+1;
            break;
        }
    }
    
    printf("\nRoll no %d has highest marks : %d",max_roll,max_marks);
}