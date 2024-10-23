// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of sides: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j=1; j<=n-i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
 #include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of sides: ";
    cin >> n;
    int nsp=n-1;
    int nst=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j=1; j<=nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        nst+=2;
        cout << endl;
    }

    return 0;
}
 

