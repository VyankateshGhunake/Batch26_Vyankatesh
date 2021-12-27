/* WAP to create a class branch with data members branch ID, branch Name, 
Branch City and member functions as getdata() and Display() */

#include<iostream>
#include<string.h>

using namespace std;
    class Branch
    {
        public:
        int branchId;
        char branchName[20];
        char branchCity[20];

            void getData(int branchId,char branchName[],char branchCity[])
            {
                this->branchId = branchId;
                strcpy(this->branchName,branchName);
                strcpy(this->branchCity,branchCity);
            }

            void Display()
            {
                cout<<"\n"<<branchId<<"\t"<<branchName<<"\t"<<branchCity;
            }

    };

int main()
{
    Branch b1,b2,b3;

    b1.getData(101,"Electrical","Sangli");
    b1.Display();

    b2.getData(102,"Mechanical","Pune");
    b2.Display();

    b3.getData(103,"Electronics","Kolhapur");
    b3.Display();

    return 0;
}