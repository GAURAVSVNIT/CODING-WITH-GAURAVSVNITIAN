# include <iostream>
# include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string temp;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            temp.push_back(s[i]);
        }
    }
    // Bubble Sort
    for(int i=0;i<temp.size();i++)
    {
        for(int j=0;j<temp.size()-i-1;j++)
        {
            bool flag=false;
            if(temp[j]>temp[j+1])
            {
                char t=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=t;
                flag=true;
            }
            if(flag==false)
            {
                break;
            }
        }
    }
    cout << s;
    return 0;
}