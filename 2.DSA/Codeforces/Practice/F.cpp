// Given two numbers N and M. Print the summation of their last digits.

// Input
// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

// Output
// Print the answer of the problem

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a,b,c;
    a=n%10;
    b=m%10;
    c=(a+b)%10;
    if(c<0)
    {
        c+=10;
    }
    cout<<c;
    return 0;
}
