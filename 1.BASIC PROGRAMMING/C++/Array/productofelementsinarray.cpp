#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * a[i];
    }
    cout << "The product of the elements in the array is: " << product;
}