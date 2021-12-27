/* WAP to find billammount with discount. Apply discount in following conditions
1. if price of product is greater than Rs.50 then apply discount 2.5%
2. if price of product is greater than Rs.100 then apply discount 5%
3. if price of product is greater than Rs.200 then apply discount 7% */

#include<iostream>

using namespace std;
    int billAmount(int price)
    {
        if(price>50 && price<=100)
        return -1;
        else if(price>100 && price<=200)
        return 0;
        else if(price>200)
        return 1;
    }
int main()
{
    int Price;

    cout<<"\n Enter price of the Product :";
    cin>>Price;
    int ans = billAmount(Price);

    if(ans==-1)
    cout<<"\n Billamount with discount :"<<(Price-(Price*0.025));

    else if(ans==0)
    cout<<"\n Billamount with discount :"<<(Price-(Price*0.05));

    else if(ans==1)
    cout<<"\n Billamount with discount :"<<(Price-(Price*0.07));
    return 0;
}