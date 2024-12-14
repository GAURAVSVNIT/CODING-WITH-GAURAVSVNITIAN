#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s;
    s[1]='a';//In  C/C++ strings are immutable but not in python and java
    cout<<s;
    return 0;
}