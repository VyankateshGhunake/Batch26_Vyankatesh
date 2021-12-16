// WAP to display prime numbers between the user specified range.
#include<iostream>

using namespace std;

    int primeNumbers(int n1)
    {
    int cnt = 0;
        for(int i=1;i<=n1;i++)
            {
                if(n1%i==0)
                cnt++;
            }
            return cnt;
    }
int main()
{
    int n1,n2;
    cout<<"\n Enter the Range n1 to n2 :";
    cin>>n1>>n2;

    cout<<"\n The prime numbers in the range are :";
    for(n1;n1<=n2;n1++)
    {
        int ans = primeNumbers(n1);
        if(ans==2)
            cout<<"\t"<<n1;
    }
    return 0;
}