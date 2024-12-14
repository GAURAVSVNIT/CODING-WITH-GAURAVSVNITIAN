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
        //wave print
        for(int i=0;i<m;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<a[i][j]<<" ";
                }
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                {
                    cout<<a[i][j]<<" ";
                }
            }
        }
        
    return 0;
}