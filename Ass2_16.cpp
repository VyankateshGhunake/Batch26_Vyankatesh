/* Write a Menu Driven Program to edit Bank Account.
Menu
1. Open Account 2. View Account 3. deposit Amount 4. Withdraw Amount 5. View Balance  6. Search Account  7. Exit */

#include<iostream>
#include<unistd.h>
#include<string.h>

using namespace std;

    void viewAccount(char no[])
    {
        cout<<"\n Account holder name : Vyankatesh Sacchidanand Ghunake";
        cout<<"\n Account number : "<<no;
        cout<<"\n IFSC code : ICIC0006391";
        cout<<"\n City : Ichalkaranji";
        cout<<"\n Current Balance : Rs.16023.5";
    }

    void findByAccount(char accnum[])
    {
        char n1[13],n2[13],n3[13],n4[13],n5[13];
        strcpy(n1,"962381481722");
        strcpy(n2,"915877994040");
        strcpy(n3,"721885008140");
        strcpy(n4,"904980839950");
        strcpy(n5,"962381481735");
        if(strcmp(n1,accnum)==0 || strcmp(n2,accnum)==0 || strcmp(n3,accnum)==0 || strcmp(n4,accnum)==0 || strcmp(n5,accnum)==0)
        cout<<"\n"<<accnum<<" Account number do exist in the bank..!";
        else
        cout<<"\n Account number does not exist..!";
    }
int main()
{
    int choice;
    long amt;
    char name[30],adhar[13],num[11];
    char accNum[13],pin[5];
    long amount = 16500;
    cout<<"\n Select one option from the following..";
    cout<<"\n 1. Open Account"<<"\n 2. View Account"
        <<"\n 3. Deposit Amount"<<"\n 4. Withdraw Amount"
        <<"\n 5. View Balance"<<"\n 6. Search Account"<<"\n 7. Exit";
    
    cout<<"\n Enter your option : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n Your option is Open Account..";
            cout<<"\n To Open Account follow the instruction below..";
            cout<<"\n Enter Your name : ";
            cin>>name;
            cout<<"\n Enter your Adhaar number : ";
            cin>>adhar;
            cout<<"\n Enter your mobile number : ";
            cin>>num;
            cout<<"\n Enter opening amount for deposite : ";
            cin>>amt;
            cout<<"\n Your Account opened successfully..!";
        break;
        case 2:
            cout<<"\n Your option is View Account..";
            cout<<"\n Enter 12 digit Account number : ";
            cin>>accNum;
            viewAccount(accNum);
        break;
        case 3:
            cout<<"\n Your option is Deposit Amount..";
            cout<<"\n Enter 12 digit Account number : ";
            cin>>accNum;
            cout<<"\n Enter amount to Deposit : Rs.";
            cin>>amt;
            cout<<"\n Processing...";
            sleep(5);
            cout<<"\n Your amount deposited successfully..!";
        break;
        case 4:
            cout<<"\n Your option is Withdraw Amount..";
            cout<<"\n Enter 12 digit Account number : ";
            cin>>accNum;
            cout<<"\n Enter amount to Withdraw : Rs.";
            cin>>amt;
            cout<<"\n Enter PIN : ";
            cin>>pin;
            cout<<"\n Processing...";
            sleep(5);
            cout<<"\n Please, Collect your cash..!";
        break;
        case 5:
            cout<<"\n Your option is View balance..";
            cout<<"\n Enter 12 digit Account number : ";
            cin>>accNum;
            cout<<"\n Enter PIN : ";
            cin>>pin;
            cout<<"\n Your account balance : Rs."<<amount;
        break;
        case 6:
            cout<<"\n Your option is Search Account..";
            cout<<"\n Enter 12 digit Account number : ";
            cin>>accNum;
            findByAccount(accNum);
        break;
        case 7:
            cout<<"\n Your option is Exit..";
            cout<<"\n Please wait...";
            sleep(5);
            system("cls");            
    }
    return 0;
}







