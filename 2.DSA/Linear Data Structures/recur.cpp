# include <bits/stdc++.h>
using namespace std;
// void factorial(int n, int currentfactorial)
// {
//     int i = n;
//     if(i < 1)
//     {
//         cout << currentfactorial << endl;
//         return;
//     }
//     factorial(i-1, currentfactorial + i);
// }
int factorial(int n)
{
    
    if(n==1 || n==0)
    {
        return 1;
    }
    return n * factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    int k = factorial(n);
    cout<<k;
}