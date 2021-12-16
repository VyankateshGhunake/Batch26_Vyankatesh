/*WAP to display the minimum value among the array values.*/

#include<iostream>

using namespace std;
    int minValueOfArr(int arr[])
    {   
        int min = arr[0]; 
        for(int i=1;i<5;i++)
        {
            if(min>arr[i])
            min = arr[i];
        }
        return min;
    }
int main()
{
    int arr[] = {31,5,12,3,95};

    cout<<"\n Given Array : ";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }

    int ans = minValueOfArr(arr);
    cout<<"\n Minimum value among the array values is :"<<ans;
}