#include <iostream>
using namespace std;
int main()
{
    int n_rows, n_columns;
    cout<<"Enter the number of rows: ";
    cin>>n_rows;
    cout<<"Enter the number of columns: ";
    cin>>n_columns;

    for(int i=1; i<=n_rows; i++)
    {
        for(int j=1; j<=n_columns; j++)
        {
        
                cout<<"*";
            
        }
        cout<<"\n";
    }
}