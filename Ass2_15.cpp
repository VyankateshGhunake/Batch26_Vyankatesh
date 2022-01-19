/* WAP to create a class Customer and input Customer Id, name and City. Entry 5 Customers and 
display the details [Array of Objects] */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

    class Customer
    {
        public:
        int customerID;
        char name[20];
        char city[20];

        void getInfo(int customerID,char name[],char city[])
        {
            this->customerID = customerID;
            strcpy(this->name,name);
            strcpy(this->city,city);
        }
        void Display()
        {
            cout<<"\n"<<this->customerID<<setw(15)<<this->name<<setw(15)<<this->city;
        }
    };
int main()
{
    Customer c[5];
    c[0].getInfo(102,"Vyankatesh","Ichalkaranji");
    c[1].getInfo(103,"Prashant","Sangli");
    c[2].getInfo(104,"Shubham","Satara");
    c[3].getInfo(105,"Shardul","Kolhapur");
    c[4].getInfo(106,"Pranay","Karad");

    cout<<"\nDetails of the Customers - ";
    for(int i=0;i<5;i++)
    {
        c[i].Display();
    }
    return 0;
}