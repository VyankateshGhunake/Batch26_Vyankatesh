/* WAP to declare a class Enquiry and input Enqno, Date, Name of person, City and contact 
number. Input 3 Entries and display the details. The Program can also useful to find the Enquiry 
from particular City. */

#include<iostream>
#include<string.h>

using namespace std;
    class Enquiry
    {
        public:
            int Enqno;
            char Date[15];
            char Name[25];
            char City[20];
            char Contact[10];
        
        void addEnquiry(int Enqno,char Date[],char Name[],char City[],char Contact[])
        {
            this->Enqno = Enqno;
            strcpy(this->Date, Date);
            strcpy(this->Name, Name);
            strcpy(this->City, City);
            strcpy(this->Contact, Contact);
        }

        void show()
        {
            cout<<"\n\n Enquiry no : "<<this->Enqno<<"\n Date : "<<this->Date<<"\n Name : "
            <<this->Name<<"\n City : "<<this->City<<"\n Contact no : "<<this->Contact;
        }
    };

    Enquiry findByCity(Enquiry x, Enquiry y, Enquiry z);
int main()
{
    Enquiry e1,e2,e3;

    e1.addEnquiry(101,"02/05/2021","Vyankatesh","Ichalkaranji","9623814817");
    e2.addEnquiry(103,"03/08/2020","Shubham","Shirol","9049808398");
    e3.addEnquiry(105,"12/12/2015","Prashant","Aatpadi","9823815215");

    cout<<"\n Enquiry List of Cities -";
    e1.show();
    e2.show();
    e3.show();

    findByCity(e1,e2,e3);

    return 0;
}

    Enquiry findByCity(Enquiry x, Enquiry y, Enquiry z)
    {
        char city[20];
        cout<<"\n\n Enter City name for Enquiry : ";
        cin>>city;

        if(stricmp(city,x.City)==0)
        {
            cout<<"\n Details of the City -";
            x.show();
        }
        else if(stricmp(city,y.City)==0)
        {
            cout<<"\n Details of the City -";
            y.show();
        }
        else if(stricmp(city,z.City)==0)
        {
            cout<<"\n Details of the City -";
            z.show();
        }
        else
        cout<<"\n This city does not exist in the list of Enquiry..!";
    }