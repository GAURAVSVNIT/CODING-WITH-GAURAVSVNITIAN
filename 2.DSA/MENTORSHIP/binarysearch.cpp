#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int x;
    cin>>x;
    for(int i = 0; i<v.size();i++)
    {
        v.push_back(i);
    }
    int l = 0;
    int h = v.size()-1;
    while(l<=h)
    {
        int mid = l+((h-l)/2);
        if(v[mid]==x)
        {
            cout<<"Element found at "<<mid;
            break;
        }
        else if(v[mid]<x)
        {
            l = mid+1;
        }
        else
        {
            h = mid-1;
        }
    }
}