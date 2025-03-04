#include <iostream>
using namespace std;

int main()
{
    double weight,height;
    cout<<"Enter your weight in kg: ";
    cin>>weight;
    cout<<"Enter your height in meters: ";
    cin>>height;
    cout<<"Your BMI is: "<<weight/(height*height);
    return 0;
}