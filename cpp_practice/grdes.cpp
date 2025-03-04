#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    if(marks>80)
    cout<<"grade is A"<<endl;
    else if(marks>60&&marks<=80)
    cout<<"grade is B"<<endl;
    else if(marks>50&&marks<=60)
    cout<<"grade is C"<<endl;
    else if(marks>45&&marks<=50)
    cout<<"grade is D"<<endl;
    else if(marks>25&&marks<=45)
    cout<<"grade is E"<<endl;
    else
    cout<<"grade is F"<<endl;
    return 0;
}