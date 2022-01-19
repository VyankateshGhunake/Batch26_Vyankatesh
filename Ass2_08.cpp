/* WAP to create a class Integer and declare a data member no. 
use different 3 objects to store the values and display maximum number from it */

#include<iostream>
using namespace std;

    class Integer
    {
        public:
        int no;
        int getNum(int no)
        {
            this->no = no;
        }
    };

    int maxNum(Integer i1,Integer i2,Integer i3);
int main()
{
    Integer i1,i2,i3;

    i1.getNum(85);
    i2.getNum(15);
    i3.getNum(92);

    int ans = maxNum(i1,i2,i3);

    if(ans==i1.no)
    cout<<"\n"<<i1.no<<" is Max number..!";
    else if(ans==i2.no)
    cout<<"\n"<<i2.no<<" is Max number..!";
    else
    cout<<"\n"<<i3.no<<" is Max number..!";
    return 0;
}
    int maxNum(Integer i1,Integer i2,Integer i3)
        {
            if(i1.no>i2.no && i1.no>i3.no)
            return i1.no;
            else if(i2.no>i3.no)
            return i2.no;
            else
            return i3.no;
        }
