# include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(5);
    cout<<"Enter the elements of the array"<<endl;
    for(int i =0; i<5; i++)
    {
        cin>>arr[i];
    }
    int n = 5;
    // for(int i=0; i<n/2; i++)
    // {
    //     swap(arr[i], arr[n-i-1]);
    // }

    arr = {arr.rbegin(), arr.rend()};
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}