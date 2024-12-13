#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Gaurav is a great coder";
    cout<<s<<str.length()<<endl;
    s[0]='A';
    cout<<s;
    string s1="Gaurav is a great coder";
    s1.push_back('!');
    cout<<str;
    s1.pop_back('!');
    cout<<str;
    string s2="GAU"
    s2.append("RAV");
    cout<<s2;
    s2+="RAV";
    cout<<s2;
    string s3="Gaurav";
    string s4="is a great coder";
    reverse(s4.begin(),s4.end());
    cout<<s4;
    cout<<s3.substr(1,5);
    cout<<s3.find("av");
    cout<<s3.find("av",3);
    cout<<s3.find("av",4);
    string s5= to_string(123);
    cout<<s5;



    return 0;
}