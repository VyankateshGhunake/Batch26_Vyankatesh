// WAP to swap the two numbers without using temperory variable.

#include<iostream>

using namespace std;
    void swapTwoNum(int a,int b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
        cout<<"\n After swapping..\n"<<"a = "<<a<<" b = "<<b;
    }

int main()
{
    int n1,n2;
    cout<<"\n Enter any two numbers : ";
    cin>>n1>>n2;

    cout<<"\n Before swapping..\n"<<"a = "<<n1<<" b = "<<n2;

    swapTwoNum(n1,n2);
    return 0;
}
