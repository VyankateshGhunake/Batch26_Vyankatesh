//WAP to calculate and print factorial of first 10 numbers.

#include<iostream>

    int factOfNum(int n)
    {
        int fact =1;
       for(int i=1;i<=n;i++)
       {
            fact = fact*i;
       }
       return fact;
    }

using namespace std;
int main()
{
    cout<<"\n Factorial of first 10 Numbers are :";
    for(int n=1;n<=10;n++)
    {
        int ans = factOfNum(n);
        cout<<"\n"<<ans;
    }
    return 0;
}