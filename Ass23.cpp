/* WAP to accept the value of a from class Demo1 and value of b from class Demo2. 
The variables a and b are private. Exchange/swap the two values and display the result. 
[Use friend function] */

#include<iostream>

using namespace std;

    class Demo2;
    class Demo1
    {
        private:
        int a;
        friend int swapTheNum(Demo1 x,Demo2 y);
    };

    class Demo2
    {
        private:
        int b;
        friend int swapTheNum(Demo1 x,Demo2 y);
    };

    int swapTheNum(Demo1 x,Demo2 y);
int main()
{
    Demo1 d1;
    Demo2 d2;
    
    swapTheNum(d1,d2);
    return 0;
}

    int swapTheNum(Demo1 x,Demo2 y)
    {
        cout<<"\n Enter any two numbers to swap :";
        cin>>x.a>>y.b;
        cout<<"\n Before Swapping : "<<"a = "<<x.a<<"\tb = "<<y.b;

        int t = x.a;
        x.a = y.b;
        y.b = t;

        cout<<"\n After Swapping : "<<"a = "<<x.a<<"\tb = "<<y.b;
    }