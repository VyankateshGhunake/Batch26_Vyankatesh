/* WAP to input price,qty and create a fuction calculate() with arguments
which accepts the price and qty  and calculates Bill amount. Return the bill ammount.
Display Total. */

#include<iostream>

using namespace std;
    int calculate(float Price,int Qty)
    {
        return (Price*Qty);
    }

int main()
{
    float price;
    int qty;

    cout<<"\n Enter Price of the Product : Rs.";
    cin>>price;

    cout<<"\n Enter quantity of the Product : ";
    cin>>qty;

    int ans = calculate(price,qty);

    cout<<"\n Bill amount : Rs."<<ans;
    return 0;
}


