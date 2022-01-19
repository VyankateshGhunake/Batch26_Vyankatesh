/* WAP to interchange the integer numbers using a function [Reference Arguments] */

#include<iostream>

using namespace std;

    int swapNum(int &x,int &y)
    {
        int t = x;
        x = y;
        y = t;
    }
int main()
{
    int a=10,b=20;

    cout<<"\n Before Interchanging : a = "<<a<<" b = "<<b;
    
    swapNum(a,b);

    cout<<"\n After Interchanging : a = "<<a<<" b = "<<b;
    return 0;
}