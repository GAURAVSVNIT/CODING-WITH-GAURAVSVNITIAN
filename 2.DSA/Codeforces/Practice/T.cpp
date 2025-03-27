// // Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// Input
// Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

// Output
// Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

# include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m,n,o;
    m=a;
    n=b;
    o=c;
    if(a>b)
    {
        swap(a,b);
    }
    if(a>c)
    {
        swap(a,c);
    }
    if(b>c)
    {
        swap(b,c);
    }
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<endl;
    cout<<m<<endl<<n<<endl<<o<<endl;
    return 0;
}