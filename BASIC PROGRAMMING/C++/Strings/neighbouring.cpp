#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s.length() == 1)
        {
            cout << 0 << endl;
            return 0;
        }
        if(i==0)

        {
            if(s[i]!=s[i+1])
            {
                count++;
            }
        }
        else if(i==s.length()-1)
        {
            if(s[i]!=s[i-1])
            {
                count++;
            }
        }
        else if (s[i] != s[i + 1] && s[i] != s[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}