/* WAP to overload the Constructor Addition which is used to calculate Addition of two Integers, 3 
Decimals and array of integer */

#include<iostream>

using namespace std;
    class Addition
    {
        public:
            Addition(int a, int b)
            {
                cout<<"\n Addition of 2 integers : "<<a+b;
            }

            Addition(float x,float y,float z)
            {
                cout<<"\n Addition of 3 decimals : "<<x+y+z;
            }

            Addition(int arr[])
            {
                int sum=0;
                for(int i=0;i<5;i++)
                {
                    sum+= arr[i];
                }
                cout<<"\n Addition of Array elements : "<<sum;
            }
    };
int main()
{
    int array[5] = {14,15,16,17,18};

    Addition A1(15,20);
    Addition A2(1.5f,1.6f,2.1f);
    Addition A3(array);
    return 0;
}