// Leaders in an Array
// Given an integer array nums, return a list of all the leaders in the array.

// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int ar[]={1,2,6,1,2,4,1};
    int n=sizeof(ar)/sizeof(ar[0]);
    vector<int> v;
    int max=ar[n-1];
    v.push_back(max);
    for(int i=n-2;i>=0;i--)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            v.push_back(max);
        }
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
}