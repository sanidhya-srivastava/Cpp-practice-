#include<iostream>
using namespace std;
int main()
{
    int ch,a,b;
    cout<<"the menu is:\n1)add\n2)subtract\n3)multiply\n4)divide\n5)modulus"<<endl;
    cout<<"your choice is";
    cin>>ch;
    cout<<"enter num 1:";
    cin>>a;
    cout<<"enter num 2:";
    cin>>b;
    switch(ch)
    {
        case 1: cout<<a+b<<endl; break;
        case 2: cout<<a-b<<endl; break;
        case 3: cout<<a*b<<endl; break;
        case 4: cout<<a/b<<endl; break;
        case 5: cout<<a%b<<endl; break;
        default: cout<<"invalid choice"<<endl;
    }
    return 0;
}