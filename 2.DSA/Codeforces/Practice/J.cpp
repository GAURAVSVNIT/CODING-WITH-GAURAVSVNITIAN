#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    if(m%n==0||n%m==0)
    {
        cout<<"Multiples";
    }
    else
    {
        cout<<"No Multiples";
    }
}