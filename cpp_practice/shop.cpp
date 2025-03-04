#include<iostream>

using namespace std;

int main()
{
    int n,amt,bill;
    double b;
    cout << "enter the quantity: ";
    cin >> n;
    cout << "enter the amount: ";
    cin >> amt;
    bill=n*amt;
    if(bill>100)
    {
    b=bill-(0.1*bill);
    cout << "the bill is: " << b;
    }
    else
    {
    cout << "the bill is: " << bill;
    }
    return 0;
}