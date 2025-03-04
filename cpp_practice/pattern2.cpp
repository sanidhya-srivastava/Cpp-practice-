
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int i;
    for(i=1;i<=6;i++)
    {
        if(i==1||i==6)
        cout<<n<<n<<n<<n<<endl;
        else
        cout<<n<<"  "<<n<<endl;
    }
    return 0;
}