#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> temp;
    s.push(10);
    s.push(20);
    s.push(30);
    //Emptying the stack
    while(s.size()!=0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    //How to get element back in  the stack
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<endl;
    while(s.size()!=0)
    {
        cout<<s.top()<<" ";
        temp.push(s.top());
        s.pop();
    }
    return 0;
}