#include<iostream>
#include<string>
using namespace std;
string reverse(string s)
{
    string s1;
    for(int i=s.length()-1;i>=0;i--)
    {
        s1+=s[i];
    }
    return s1;
}
int main()
{
    string str,str2;
    cin >> str;
    str2=reverse(str);
    cout<<str2<<endl;
    return 0;

}