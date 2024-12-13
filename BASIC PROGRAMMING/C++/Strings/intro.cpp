# include<iostream>
# include<string>
using namespace std;
int main()
{
    char name[6] = {'G','A','U','R','A','V'};
    char name1[] = "GAURAV";
    string str;
    // cout<<"Enter a string: ";
    // cin>>str;
    // cout<<"The entered string is: "<<str;
    cout<<"\n";
    cout<<"The name is: ";
    for(int i=0;i<6;i++)
    {
        cout<<name[i];
    }
    cout<<endl<<(int)(name[5]);
    string str1;
    getline(cin,str1);
    cout<<"The entered string is: "<<str1;
    return 0;
}