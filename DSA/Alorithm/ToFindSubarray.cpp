# include <iostream>
# include <vector>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter the start and end: ";
    cin >> start >> end;
    vector<int> v={1,2,3,4,5};
    for(int i=start;i<v.size();i++)
    {
        for(int j=i;j<v.size();j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<v[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}