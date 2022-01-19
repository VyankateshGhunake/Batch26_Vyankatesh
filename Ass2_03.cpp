// WAP to input two numbers and display their Arithmetical Operations.

#include<iostream>

using namespace std;

    float addNum(float x,float y)
    {
        return(x+y);
    }
    float subNum(float x,float y)
    {
        return(x-y);
    }
    float multNum(float x,float y)
    {
        return(x*y);
    }
    float divNum(float x,float y)
    {
        return((float)x/y);
    }
int main()
{
    float a,b;
    cout<<"\n Enter any two numbers : ";
    cin>>a>>b;

    cout<<"\n All Arithmetical Operations are as follows..";
    float ans1 = addNum(a,b);
    cout<<"\n Addition : "<<ans1;

    float ans2 = subNum(a,b);
    cout<<"\n Subtraction : "<<ans2;

    float ans3 = multNum(a,b);
    cout<<"\n Multiplication : "<<ans3;

    float ans4 = divNum(a,b);
    cout<<"\n Division : "<<ans4;

    return 0;
}