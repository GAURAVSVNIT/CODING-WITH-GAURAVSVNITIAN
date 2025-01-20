/* Let A[n] be an array of n distinct integers. If i < j and A[i] > A[j], then the pair (i, j)
is called an inversion of A. Write a C/C++ program that determines the number of
inversions in any permutation on n elements. */

# include <iostream>
using namespace std;

int main()
{
    int n;
    // Prompt the user to enter the number of elements in the array5
    
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    // Declare an array of size n
    int arr[n];
    // Prompt the user to enter the elements of the array
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int inv_count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inv_count++;
            }
        }
    }

    cout<<"The number of inversions in the array is: "<<inv_count<<endl;
    return 0;
}