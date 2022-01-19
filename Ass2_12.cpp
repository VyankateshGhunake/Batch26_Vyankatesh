/* WAP to declare a class Hardware. Input hardware name and Price. Pass the Object to a function 
showHardware() and display the Details [Passing Object as Function Argument] */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
    class Hardware
    {
        public:
            char name[20];
            float price;

            void getHardware(char name[],float price)
            {
                strcpy(this->name,name);
                this->price = price;
            }
    };

    void showHardware(Hardware a,Hardware b,Hardware c);
int main()
{
    Hardware h1,h2,h3;

    h1.getHardware("Keyboard",500.0);
    h2.getHardware("Mouse",300.0);
    h3.getHardware("Monitor",7000.0);

    showHardware(h1,h2,h3);
    return 0;
}

    void showHardware(Hardware a,Hardware b,Hardware c)
    {
        cout<<"\n"<<setw(10)<<a.name<<setw(10)<<"Rs."<<a.price
            <<"\n"<<setw(10)<<b.name<<setw(10)<<"Rs."<<b.price
            <<"\n"<<setw(10)<<c.name<<setw(10)<<"Rs."<<c.price;      
    }