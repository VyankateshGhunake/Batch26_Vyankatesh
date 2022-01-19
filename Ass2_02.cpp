// WAP to input two integer numbers and display their addition.

#include<iostream>

using namespace std;

    int add(int x,int y)
    {
        return(x+y);
    }
int main()
{
    int a,b;

    cout<<"\n Enter any two integers : ";
    cin>>a>>b;

    int ans = add(a,b);
    cout<<"\n Addition of this two integers : "<<ans;
    return 0;
}
