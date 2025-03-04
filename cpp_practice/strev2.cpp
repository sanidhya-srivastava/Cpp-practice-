#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cout << "enter the string" << endl;
    cin>>s1;
    for(int i=0;i<s1.length();i++)
    {
        s2+=s1[s1.length()-i-1];
    }
    cout<<s2<<endl;
    return 0;
}