// WAP to create a function searcharray() which finds the array value is present or not.

#include<iostream>

using namespace std;

    int searcharray(int arr[],int num)
    {   
        int cnt=0;
        for(int i=0;i<=9;i++)
        {
            if(num==arr[i])
            cnt++;
        }
        return cnt;
    }
int main()
{
    int num;
    int arr[10] = {55,69,12,68,74,31,12,9,5,86};
    cout<<"\n Enter the number to search : ";
    cin>>num;
    int ans = searcharray(arr,num);

    if(ans>=1)
        cout<<"\n The number exist in the series "<<ans<<" times..!";
    else
        cout<<"\n The number does not exist in the series..!";

    return 0;
}