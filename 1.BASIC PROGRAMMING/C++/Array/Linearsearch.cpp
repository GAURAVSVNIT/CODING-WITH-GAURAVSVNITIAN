# include <iostream>    
using namespace std;
int main()
{
    int n,i,key;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"Element found at position "<<i+1;
            break;
        }
    }    
    if(i==n)
    {
        cout<<"Element not found in the array.";
    }
    return 0;
}