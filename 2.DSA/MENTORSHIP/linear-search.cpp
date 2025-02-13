# include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int target, int n){
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
   
}

int main ()
{
    vector<int> arr;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<10; i++){
        arr.push_back(i);
    }
    int target;
    cin>>target;
    int n = arr.size();
    cout<<linearSearch(arr, target,n);
}
