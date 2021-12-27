// WAP to display even and odd values from the given range.

#include<iostream>

using namespace std;
    void evenNum(int a, int b)
    {
        for(a;a<=b;a++)
        {
            if(a%2==0)
            {
                cout<<"\n"<<a;
            }
        }
    }

    void oddNum(int a, int b)
    {
        for(a;a<=b;a++)
        {
            if(a%2==1)
            {
                cout<<"\n"<<a;
            }
        }
    }
int main()
{
    int n1,n2;
    cout<<"\n Enter the range from n1 to n2 : ";
    cin>>n1>>n2;

    cout<<"\n Even numbers in the given range are :";
    evenNum(n1,n2);

    cout<<"\n Odd numbers in the given range are :";
    oddNum(n1,n2);
    return 0;
}