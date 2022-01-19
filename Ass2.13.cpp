/* WAP to declare two classes Shoppe and Customer. Input Name and Location of Shoppe, Name 
and Contact number of Customer. Display the details of Shop and Customer using a Function 
with object as Function Argument */
#include<iostream>
#include<string.h>

using namespace std;
    class Shoppe
    {
        public:
        char shopName[20];
        char location[20];
        void getInfo(char shopName[],char location[])
        {
            strcpy(this->shopName,shopName);
            strcpy(this->location,location);
        }
    };

    class Customer
    {
        public:
        char cName[20];
        char mobile[15];
        void getInfo(char cName[],char mobile[])
        {
            strcpy(this->cName,cName);
            strcpy(this->mobile,mobile);
        }
    };

    int displayDetails(Shoppe s,Customer c);
int main()
{
    Shoppe s1;
    s1.getInfo("Ganesh Bekars","Sangli");

    Customer c1;
    c1.getInfo("Vyankatesh","9623814817");
    
    displayDetails(s1,c1);
    return 0;
}

    int displayDetails(Shoppe s,Customer c)
    {
        cout<<"\n Details of the Shoppe -";
        cout<<"\n Name : "<<s.shopName<<"\t Location : "<<s.location;
        cout<<"\n\n Details of the Customer -";
        cout <<"\n Name : "<<c.cName<<"\t Mobile No. : "<<c.mobile;
    }