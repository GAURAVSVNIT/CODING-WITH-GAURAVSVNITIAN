# include <iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the marks of student "<<i<<":";
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {  
        if(a[i]<35)
        cout<<"The roll number of student with marks less than 35 is "<<i<<endl;
    }
}