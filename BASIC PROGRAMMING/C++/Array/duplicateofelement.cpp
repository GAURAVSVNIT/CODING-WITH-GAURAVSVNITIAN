# include <iostream>
using namespace std;    
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n],i;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j;
    bool flag = true;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   
            if(a[i]==a[j])
            {
                flag = false;
                break;
            }
        }
    }
    if(flag == true)
    {
        cout << "No duplicate elements found.";
    }
    else
    {
        cout << "Duplicate elements found.";
    }
    return 0;
}