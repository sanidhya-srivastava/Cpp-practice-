#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter the 2 numbers";
    cin>>a>>b;
    int s=a+b,c=0;
    while(s!=0)
    {
        s=s/10;
        c++;
    }
    cout<<c;
    return 0;
}