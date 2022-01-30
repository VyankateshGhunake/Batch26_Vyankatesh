/* WAP to declare a constructor class as BookShop. Input Shop Name, Book types and Qtys. 
Display them using a function */

#include<iostream>
#include<string.h>

using namespace std;
    class BookShop
    {
        public:
            char shopName[30];
            char bookTypes[20];
            int Qtys;

        BookShop(char shopName[],char bookTypes[],int Qtys)
        {
            strcpy(this->shopName,shopName);
            strcpy(this->bookTypes,bookTypes);
            this->Qtys = Qtys;
        }

        void display()
        {
            cout<<"\n\n Shop Name : "<<this->shopName<<"\n Book Types : "
                <<this->bookTypes<<"\n Quantities : "<<this->Qtys;
        }
    };
int main()
{
    BookShop b1("Granth Book Shop","Science Fiction",278);
    BookShop b2("Kedar Book Shop","All History",118);
    BookShop b3("Bajaj Book Shop","General Knowledge",541);

    b1.display();
    b2.display();
    b3.display();
    return 0;
}