/* WAP to input an array of 10 elements and display addition of all elements. 
Also Display even and odd numbers from it */

#include<iostream>

using namespace std;

    int addArray(int array[])
    {
        int sum = 0;
        for(int i=0;i<10;i++)
        {
            sum = sum + array[i];
        }
        return sum;
    }
    int evenArray(int array[])
    {
        for(int i=0;i<10;i++)
        {
            if(array[i]%2==0)
            cout<<" "<<array[i];
        }
    }
    int oddArray(int array[])
    {
        for(int i=0;i<10;i++)
        {
            if(array[i]%2==1)
            cout<<" "<<array[i];
        }
    }

int main()
{
    int arr[10] = {2,56,8,9,58,26,23,78,68,24};

    cout<<"\n Original Array : ";
        for(int i=0;i<10;i++)
        {
            cout<<" "<<arr[i];
        }
    int ans = addArray(arr);

    cout<<"\n Addition of all array elements : "<<ans;

    cout<<"\n Even numbers from the given series : ";
    evenArray(arr);

    cout<<"\n Odd numbers from the given series : ";
    oddArray(arr);

    return 0;
}