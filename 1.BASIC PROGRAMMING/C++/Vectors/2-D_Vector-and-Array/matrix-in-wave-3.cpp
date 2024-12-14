#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter rows of matrix :";
    cin>>m;
    cout<<"Enter columns of  matrix :";
    cin>>n;
        int a[m][n],b[m*n];
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
        
        //transpose matrix
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        //wave print
        for(int j=m-1;j>=0;j--)
        
        {
            if(j%2==0)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<a[i][j]<<" ";
                }
            }
            else
            {
                for(int i=n-1;i>=0;i--)
                {
                    cout<<a[i][j]<<" ";
                }
            }
        }
        
    return 0;
}