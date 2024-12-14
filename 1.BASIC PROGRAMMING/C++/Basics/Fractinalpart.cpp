#include<iostream>
using namespace std;
int main()
{
    float x;
    cout<<"Enter a number: ";
    cin>>x;
    int y;
    y=(int)x;
    if(y<0) y=y-1;
    cout<<"The fractional part is: "<<x-y;
    return 0;
}