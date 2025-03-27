#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin>>x;
    vector<int> v;
    for(int i = 0; i<v.size();i++)
    {
        if(v[i]==x)
        {
            cout<<"Element found at "<<i;
        }
    }
}
