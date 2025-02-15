#include <bits/stdc++.h>
using namespace std;

void pip(int n)
{
    cout<<"Pre"<<endl;
    pip(n-1);
    cout<<"In"<<endl;
    pip(n-1);
    cout<<"Post"<<endl;
}
int main()
{
    return 0;
}