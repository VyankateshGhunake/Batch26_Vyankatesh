/* Create a class SBIBank. The Account holder wants to open FD type Account. In which The 
number of years and Amount is passed through argument in the function openFDaccount(). 
Input Account number in the format (SBI00XXXX) where X is the pin value of account holder and 
also input name of account holder. [note : no. of years not compulsory it is by default 5 years] */

#include<iostream>
#include<conio.h>

using namespace std;
    class SBIBank
    {
        public:
            int yrs;
            float amount;

            void openFDaccount(int yrs,float amount)
            {
                this->yrs = yrs;
                this->amount = amount;
                cout<<"\n Your SBI FD bank account opened successfully..!";
            }
    };
int main()
{
    SBIBank a1;
    char ch1,ch2,ch3,ch4,name[50],num[4];
    int yr;
    float amt;

    cout<<"\n To open SBI FD bank account please follow the below instructions -";
    cout<<"\n Account number in the format SBI00XXXX";
    cout<<"\n Enter PIN : SBI00";

    ch1 = getch();
	cout<<"*";
	ch2 = getch();
	cout<<"*";
	ch3 = getch();
	cout<<"*";
	ch4 = getch();
    cout<<"*";

    cout<<"\n Enter the name of Account Holder : ";
    gets(name);

    cout<<"\n Number of years are by default 5 years..!";

    cout<<"\n Enter Amount : Rs.";
    cin>>amt;

        a1.openFDaccount(5,amt);
    return 0;
}