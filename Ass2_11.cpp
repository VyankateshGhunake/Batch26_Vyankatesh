/* WAP to declare a class Accessories. Input accno, name ,price ,warranty in months and display 
using the function viewAccessories(). Input 3 different accessories and apply discount of 5% */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
    class Accessories
    {
        public:
            int accno;
            char name[20];
            float price;
            int warranty;

            void getAccessories(int accno,char name[],float price,int warranty)
            {
                this->accno = accno;
                strcpy(this->name,name);
                this->price = price;
                this->warranty = warranty;
            }

            void viewAccessories()
            {
                cout<<"\n"<<this->accno<<setw(15)
                <<this->name<<setw(15)<<"Rs."<<this->price
                <<setw(10)<<this->warranty<<" months";
            }
    };

    void totalBill(Accessories x,Accessories y,Accessories z);
int main()
{
    Accessories a1,a2,a3;

    a1.getAccessories(101,"Laptop",35000.00,11);
    a1.viewAccessories();
    a2.getAccessories(102,"CPU",25000.00,8);
    a2.viewAccessories();
    a3.getAccessories(103,"Speaker",5000.0,6);
    a3.viewAccessories();

    totalBill(a1,a2,a3);
    return 0;
}

    void totalBill(Accessories x,Accessories y,Accessories z)
    {
        cout<<"\n Price of Laptop with discount : Rs."<<((x.price)-x.price*0.05);
        cout<<"\n Price of CPU with discount : Rs."<<((y.price)-y.price*0.05);
        cout<<"\n Price of Speaker with discount : Rs."<<((z.price)-z.price*0.05);
    }