/* WAP to Perform Recursion Function which accepts one Integer Argument from the user, Which 
is Last number. Display first n numbers. */

#include<iostream>

using namespace std;

    int a = 0;
    void displayNum(int num)
    {
        cout<<" \n"<<++a;
        if(a<num)
        displayNum(num);
    }
int main()
{
    int num;
    cout<<"\n Enter any number : ";
    cin>>num;

    displayNum(num);
    return 0;
}