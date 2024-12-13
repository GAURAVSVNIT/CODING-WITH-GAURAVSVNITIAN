#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter rows of first matrix :";
    cin>>m;
    cout<<"Enter columns of first matrix :";
    cin>>n;

    int p,q;
    cout<<"Enter rows of second matrix :";
    cin>>p;
    cout<<"Enter columns of second matrix :";
    cin>>q;

    if(n==p)
    {
        int a[m][n],b[p][q],c[m][q];
        cout<<"Enter elements of first matrix :";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter elements of second matrix :";
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                cin>>b[i][j];
            }
        }
        //resultant matrix
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                //multiplying and storing in c
                c[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    }
    else
    {
        cout<<"Matrix multiplication is not possible";
    }
    return 0;
}