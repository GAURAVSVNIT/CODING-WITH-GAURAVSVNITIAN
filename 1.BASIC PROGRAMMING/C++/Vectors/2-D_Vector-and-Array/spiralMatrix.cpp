#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter rows of matrix :";
    cin>>m;
    cout<<"Enter columns of  matrix :";
    cin>>n;
        int a[m][n];
    cout<<"Enter elements of  matrix :";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        //original matrix
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        //spiral print
    return 0;
}