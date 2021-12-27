/* WAP to create a function getdata() which contains the details of Vehical as 
vehical number,Vehical name,Average and fuel capacity. Display those vehicals 
which has avg>=15 km and fuel capacity is greater than 10 ltrs. */

#include<iostream>
#include<string.h>

using namespace std;
    class Vehical
    {
        public:
        int vNum;
        char vName[20];
        float avg;
        int fCapacity;

        void getaverage(int vNum,char vName[],float avg,int fCapacity)
        {
            this->vNum = vNum;
            strcpy(this->vName,vName);
            this->avg = avg;
            this->fCapacity = fCapacity;
        }
        void show()
        {
            cout<<"\n"<<this->vNum<<"\t"
            <<this->vName<<"\t"<<this->avg<<"  Km/Ltr\t"
            <<this->fCapacity<<" Ltrs";
        }
    };

    void findByAvgAndCap(Vehical V[]);
int main()
{
    Vehical v[5];

    v[0].getaverage(4817,"Swift",17.0f,32);
    v[1].getaverage(1725,"Fortuner",14.5f,42);
    v[2].getaverage(5696,"BMW",22.7f,35);
    v[3].getaverage(4554,"Ford",14.6f,30);

    findByAvgAndCap(v);

    return 0;
}

    void findByAvgAndCap(Vehical V[])
    {
        cout<<"\nDetails of the vehicals having avg>=15 & fuel capacity>=10..";
        for(int i=0;i<5;i++)
        {
            if(V[i].avg>=15 && V[i].fCapacity>=10)
            {
                V[i].show();
            }
        }
    }
