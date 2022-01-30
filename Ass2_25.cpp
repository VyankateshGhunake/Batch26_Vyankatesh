/* WAP to declare a Base class BloodBank and input Name of Blood Bank, Location, and Contact
Details. Derive a class as Patient which access the Data from Blood bank publically. Input and 
Display the details of Patient and Blood Bank [Perform Single Level Inheritance] */

#include<iostream>
#include<string.h>

using namespace std;
    class BloodBank
    {
        public:
            char nameOfBank[20];
            char location[20];
            char contact[11];
            char name[25];

            void getInfo(char nameOfBank[],char location[],char contact[],char name[])
            {
                strcpy(this->nameOfBank,nameOfBank);
                strcpy(this->location,location);
                strcpy(this->contact,contact);
                strcpy(this->name,name);
            }
    };

    class Patient : public BloodBank
    {
        public:
        void show()
        {
            cout<<"\n Blood bank name : "<<this->nameOfBank
            <<"\n Loaction : "<<this->location<<"\n Contact no : "<<this->contact
            <<"\n Name of the Patient : "<<this->name;
        }
    };
int main()
{
    Patient p;
    p.getInfo("Sanjeevani","Ichalkaranji","9623814817","Shubham Bandgar");
    p.show();
    return 0;
}