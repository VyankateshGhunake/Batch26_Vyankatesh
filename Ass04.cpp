//WAP to find the addition of numbers between the given range.

#include<iostream>

using namespace std;

    int sumOfRange(int n1,int n2)
    {
        int sum = 0;
        for(n1;n1<=n2;n1++)
        {
            sum = sum+n1;
        }
        return sum;
    }
int main()
{
    int n1,n2;
    cout<<"\n Enter the Range from n1 to n2 :";
    cin>>n1>>n2;
    
    int ans = sumOfRange(n1,n2);
    cout<<"\n Addition of all numbers :"<<ans;
}