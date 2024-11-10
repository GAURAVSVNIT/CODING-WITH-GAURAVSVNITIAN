#include <iostream>
using namespace std;
int main()
{ 
    int n =1,m=1;
    int *p=&n,*q=&m;


    cout<<&n<<endl<<p<<endl<<n<<endl<<*p<<endl<<&p<<endl;
    return 0;
}