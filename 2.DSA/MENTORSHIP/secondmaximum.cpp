# include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;

    for(int i =0; i<10; i++)
    {
        arr.push_back(i);
    }
    int n = 10;

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1)
        {
            max2 = arr[i];
        }
    }
}

//Time Complexity: O(n)
//Space Complexity: O(1)
