#include<iostream>
using namespace std;
int main()
{
    int amount;
    double balance;  //to take floating values for balance
    cin>>amount;
    cin>>balance;
    double rem_balance;   //to take floating values for balance

    if(amount%5==0)
    {
        if(amount<balance && ((amount+0.5)<=balance))
        {
            rem_balance=balance-(amount+0.5);
            cout<<rem_balance<<endl;
        }
        else
            cout<<balance<<endl;
    }
    else
    {
        cout<<balance<<endl;
    }
}
