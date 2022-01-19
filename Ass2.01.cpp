// WAP Interchanging 2nd and 3rd digit from 5 digit integer number

#include<iostream>

using namespace std;

    int interchange(int no)
    {
        int arr[5];//12345
        for(int i=0;i<5;i++)
        {
            int rem = no%10;
                arr[i] = rem;
                no=no/10;
        }//54321

        int t = arr[2];
            arr[2] = arr[3];
            arr[3] = t;
        for(int i=4;i>=0;i--)
       { 
           cout<<arr[i];
       }
    }
int main()
{
    int num;
    cout<<"\n Enter any five digit number : ";
    cin>>num;

    cout<<"\n Interchanging 2nd & 3rd digit from the number : ";
    interchange(num); //12345
    return 0;
}