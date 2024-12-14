/*
This program will generate the pascal triangle
*/
# include <iostream>

using namespace std;

int factaorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n,int r)
{
    int ncr=factaorial(n)/(factaorial(n-r)*factaorial(r));
    return ncr;
}
int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<"\n";
    }   
}