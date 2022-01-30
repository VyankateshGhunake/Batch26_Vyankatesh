/* Write a Menu Driven Program to Calculate Fare Charges for Travelling as Follows:
    1. If Vehicle is Private then, Fare charges are Rs. 15 per Kilometer
    2. If Vehicle is Ac then, Fare Charges are Rs. 18 per Kilometer
    3. If Vehicle is Local, Fare Charges are Rs. 8 per Kilometer
    4. If Vehicle is Bus Reservation, Fare charges are Rs.5.5 per kilometer
        Display the Customer Ticket Details Correctly */
#include<iostream>
#include<string.h>
#include<unistd.h>

using namespace std;
    void addTicket(char cPlace[],char dest[20],float dist,char type[],float price)
    {
            cout<<"\n Enter the name of current place : ";
            cin>>cPlace;
            cout<<"\n Enter the name of destination : ";
            cin>>dest;
            cout<<"\n Enter the distance between two places(in Km) : ";
            cin>>dist;
            cout<<"\n Generating Ticket...";
            sleep(3);

            system("cls");
            cout<<"\n\t\t Ticket";
            cout<<"\n -----------------------------------";
            cout<<"\n From - "<<cPlace;
            cout<<"\n To - "<<dest;
            cout<<"\n Vehicle Type : "<<type;
            cout<<"\n Distance - "<<dist<<" Km";
            cout<<"\n Total bill - Rs."<<dist*price;
            cout<<"\n -----------------------------------";
            cout<<"\n\t     Happy Journey..!";
    }
int main()
{
    int choice;
    char cPlace[20],dest[20],type[20];
    float dist,price;
    cout<<"\n Choose one of the following Vehicles -";

    cout<<"\n\n 1. Private Vehicle "<<"\n 2. AC Vehicle"
        <<"\n 3. Local Vehicle"<<"\n 4. Bus Reservation";

    cout<<"\n Enter your choice number : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n You have selected Private Vehicle for your journey..!";
            strcpy(type,"Private");
            price = 15;
            addTicket(cPlace,dest,dist,type,price);
        break;
        case 2:
            cout<<"\n\n You have selected AC Vehicle for your journey..!";
            strcpy(type,"AC");
            price = 18;
            addTicket(cPlace,dest,dist,type,price);
        break;
        case 3:
            cout<<"\n\n You have selected Local Vehicle for your journey..!";
            strcpy(type,"Local");
            price = 8;
            addTicket(cPlace,dest,dist,type,price);
        break;
        case 4:
            cout<<"\n\n You have selected Bus Reservation for your journey..!";
            strcpy(type,"Bus Reservation");
            price = 5.5f;
            addTicket(cPlace,dest,dist,type,price);
        break;
        default:
            cout<<"\n You have entered wrong choice..!";
    }
    return 0;
}