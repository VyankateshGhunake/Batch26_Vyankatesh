/* WAP to create two classes as MktDept and ProdDept. Input name and salary of an Employee. 
Compare both employees and display which employee earns more. [Note : Variables Must be 
Private] */

#include<iostream>
#include<string.h>

using namespace std;
    class MktDept
    {
        private:
            char name[20];
            long salary;
        public:
            void getInfo(char name[],long salary)
            {
                strcpy(this->name,name);
                this->salary = salary;
            }
            void Display()
            {
                cout<<"\n Name of the Employee : "<<this->name;
                cout<<"\n Salary : Rs."<<this->salary;
            }

        char* getName()
        {
            return name;
        }
        int getSalary()
        {
            return salary;
        }
    };

    class ProdDept
    {
        private:
            char name[20];
            long salary;
        public:
            void getInfo(char name[],long salary)
            {
                strcpy(this->name,name);
                this->salary = salary;
            }
            void Display()
            {
                cout<<"\n Name of the Employee : "<<this->name;
                cout<<"\n Salary : Rs."<<this->salary;
            }

        char* getName()
        {
            return name;
        }
        int getSalary()
        {
            return salary;
        }
    };

    int findByEarning(MktDept m,ProdDept p)
    {
        if(m.getSalary()>p.getSalary())
        cout<<"\n"<<m.getName()<<" earns more that is Rs."<<m.getSalary();
        else if(m.getSalary()<p.getSalary())
        cout<<"\n"<<p.getName()<<" earns more that is Rs."<<p.getSalary();
        else
        cout<<"\nBoth "<<m.getName()<<" & "<<p.getName()<<" earns equal that is Rs."<<m.getSalary();
    }
int main()
{
    MktDept e1;
    e1.getInfo("Prashant",65000);
    e1.Display();

    ProdDept e2;
    e2.getInfo("Vyankatesh",55000);
    e2.Display();

    findByEarning(e1,e2);
    return 0;
}