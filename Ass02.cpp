/*WAP to input any number and display the reverse.*/

#include<iostream>

using namespace std;
int reverseOfNum(int num)
    {
        int rem,rev;
        rev = 0;
        for(;num!=0;num=num/10)
        {
            rem = num%10;
            rev = rev*10+rem;
        }
        return rev;
    }
int main()
{
    int num;
    cout<<"\n Enter any Number :";
    cin>>num;
    int ans = reverseOfNum(num);
    cout<<"\n Reverse of Number :"<<ans;
    return 0;
}
