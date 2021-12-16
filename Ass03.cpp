// WAP to find the maximum number amongst three numbers.

#include<iostream>

using namespace std;

    int maxOfNum(int x,int y,int z)
    {
        if(x>y && x>z)
            return x;
        else if(y>x)
            return y;
        else if(z>x)
            return z;
        else if(x==y && y==z)
            return -1;
    }
int main()
{
    int x,y,z;
    cout<<"\n Enter any three numbers :";
    cin>>x>>y>>z;

    int ans = maxOfNum(x,y,z);
    if(ans==-1)
        cout<<"\n All numbers are equal.";
    else
        cout<<"\n Maximum number is "<<ans;
    return 0;
}