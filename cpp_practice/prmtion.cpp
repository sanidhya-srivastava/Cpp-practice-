#include<iostream>

using namespace std;

int main()
{
    double salary,raise,new_salary;
    int n;
    cout<<"enter the annual salary: ";
    cin>>salary;
    cout<<"enter employee rating: ";
    cin>>n;
    if(n==1)
    {
        raise=(0.06)*salary;
        new_salary=salary+raise;
    }
    else if(n==2)
    {
        raise=(0.04)*salary;
        new_salary=salary+raise;
    }
    else if(n==3)
    {
        raise=(0.015)*salary;
        new_salary=salary+raise;
    }
    else
    cout<<"no raise"<<endl;
    cout<<"raise: "<<raise<<endl;
    cout<<"new salary: "<<new_salary<<endl;
    return 0;

}