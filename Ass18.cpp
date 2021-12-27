/* WAP to create a class population with data members city and totalpopulation & member 
functions getdata() with arguments which accepts the values. Create 3 objects and 
Display the name of city which has maximum number of population.*/

#include<iostream>
#include<string.h>

using namespace std;
    class Population
    {
        public:
        char city[20];
        long totalPopulation;

        void getData(char city[],long totalPopulation)
        {
            strcpy(this->city,city);
            this->totalPopulation = totalPopulation;
        }

        void show()
        {
            cout<<"\n"<<city<<"\t"<<totalPopulation;
        }
    };

     Population findByMax(Population a,Population b,Population c);
int main()
{
    Population p1,p2,p3;
    p1.getData(" Pune",15000000);
    p1.show();

    p2.getData(" Mumbai",25000000);
    p2.show();

    p3.getData(" Delhi",20000000);
    p3.show();

    Population ans = findByMax(p1,p2,p3);
    cout<<"\n Details of the city having Max Population ..";
    ans.show();

    return 0;
}

    Population findByMax(Population a,Population b,Population c)
    {
        if(a.totalPopulation>b.totalPopulation && a.totalPopulation>c.totalPopulation)
        return a;
        else if(b.totalPopulation>c.totalPopulation)
        return b;
        else 
        return c;
        
    }