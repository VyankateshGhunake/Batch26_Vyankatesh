/* WAP to create a class ARRAY with member function getarray() which accepts the 
array elements as user defined size and create another function geteven(), getodd() 
to display the all even and odd values from the array.[Use scope resolution operator] */

#include<iostream>

using namespace std;
    class ARRAY
    {
        public:
        int series[5];
        int getEven(int series[]);
        int getOdd(int series[]);

        int getArray(int series[])
        {
            for(int i=0;i<5;i++)
            {
                this->series[i]=series[i];
            }
        }

        void show()
        {
            for(int i=0;i<5;i++)
            {
                cout<<" "<<series[i];
            }
        }
    };

    int ARRAY::getEven(int series[])
        {
            cout<<"\n Even values in the series are :";
            for(int i=0;i<5;i++)
            {
                if(series[i]%2==0)
                cout<<" "<<series[i];
            }
        }
    int ARRAY:: getOdd(int series[])
        {
            cout<<"\n Odd values in the series are :";
            for(int i=0;i<5;i++)
            {
                if(series[i]%2==1)
                cout<<" "<<series[i];
            }   
        }

int main()
{
    ARRAY arr[5];

    int series[5] = {18,13,89,88,65};

    arr[5].getArray(series);
    cout<<"\n Given array is :";
    arr[5].show();

    arr[5].getEven(series);
    arr[5].getOdd(series);
    
    return 0;
}

