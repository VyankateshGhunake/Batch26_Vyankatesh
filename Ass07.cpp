// WAP to display the array values in Ascending order.
#include<iostream>

using namespace std;

    int sortByAsc(int arr[])
    {
        for(int si=0;si<5;si++)
        {
            for(int ci=si+1;ci<5;ci++)
            {
                if(arr[si]>arr[ci])
                {
                    int t = arr[si];
                    arr[si] =  arr[ci];
                    arr[ci] = t;
                }
            }
        }
        return arr[5];
    }
int main()
{
    int arr[] = {56, 65 ,12, 45, 8};

    cout<<"\n Before Sorting :";
        for(int i=0;i<5;i++)
        {
            cout<<"\t"<<arr[i];
        }
    sortByAsc(arr);
    cout<<"\n Ascending Order :";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;
}