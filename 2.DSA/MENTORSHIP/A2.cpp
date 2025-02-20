//Program to find all Subarray

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ar[]={1,2,3,4};
    int n=sizeof(ar)/sizeof(ar[0]);

    vector<int> v;
    int t=3;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j && j-i==t-1;k++)
            {   
                cout<<ar[k]<<" ";
            }
            cout<<endl;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}