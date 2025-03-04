#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
       int  m=n*i;
       cout<<n<<"X"<<i<<"="<<m<<endl;
    }
    return 0;
}