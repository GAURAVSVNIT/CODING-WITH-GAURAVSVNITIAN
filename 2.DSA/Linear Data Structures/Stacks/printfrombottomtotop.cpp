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
    while( s.size()!=0 )
    {
        temp.push(s.top());
        s.pop();
    }
    while(temp.size()!=0)
    {
        cout<<temp.top()<<" ";
        s.push(temp.top());
        temp.pop();
    }
    return 0;
}