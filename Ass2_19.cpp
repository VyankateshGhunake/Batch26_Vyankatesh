/* WAP to overload the function Addition which performs addition of two integers, 3 Decimals and 
Array of Integer */

#include<iostream>

using namespace std;
    void Addition(int a,int b)
    {
        cout<<"\n Addition of two integers : "<<a+b;
    }
    void Addition(float x,float y,float z)
    {
        cout<<"\n Addition of three decimal : "<<x+y+z;
    }
    void Addition(int arr[])
    {
        int sum = 0;
        for(int i=0;i<7;i++)
        {
            sum+= arr[i];
        }
        cout<<"\n Addition of array elements : "<<sum;
    }
int main()
{
    int array[7] = {15,16,78,15,22,38,56};
    Addition(18,15);
    Addition(1.7f,5.6f,9.8f);
    Addition(array);
    return 0;
}