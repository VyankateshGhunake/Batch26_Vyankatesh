/* WAP to create a class temperature with member fuctions gettemp1() which 
accepts the temprature in fahreinheit and converts it to centigrade and another 
function gettemp2() which accepts the temperature in centigrade and converts it to 
fahreinheit.Display the temperature in both units using display() function.*/
#include<iostream>

using namespace std;
    class Temperature
    {
        public:
            float ans1;
            float ans2;
            float gettemp1(float f)
            {
                ans1 = ((f-32)*5/9);
                return ans1;
            }

            float gettemp2(float c)
            {
                ans2 = ((c*9/5)+32);
                return ans2;
            }

            float display1()
            {
                cout<<"\n Temperature in Centigrade : "<<ans1<<" C";
            }

            float display2()
            {
                cout<<"\n Temperature in Fahreinheit : "<<ans2<<" F";
            }
    };
int main()
{
    Temperature t1,t2;

    float fh,cn;
    cout<<"\n Enter Temperature in Fahreinheit : ";
    cin>>fh;
    t1.gettemp1(fh);
    t1.display1();
    
    cout<<"\n\n Enter Temperature in Centigrade : ";
    cin>>cn;
    t2.gettemp2(cn);
    t2.display2();

    return 0;
}