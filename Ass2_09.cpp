/* WAP to declare a class Temperature and display Temperature in Centigrade and Fahrenheit */

#include<iostream>

using namespace std;
    class Temperature
    {
        public:
            float toCentigrade(float fa)
            {
                return((fa - 32) * 5/9);
            }

            float toFahrenheit(float cen)
            {
                return((cen * 9/5) + 32);
            }
    };
int main()
{
    Temperature t1,t2;
    float fa,cen;
    cout<<"\n Enter Temperature in Fahrenheit : ";
    cin>>fa;

    float ans1 = t1.toCentigrade(fa);
    cout<<"\n Temperature in Centigrade : "<<ans1;

    cout<<"\n\n Enter Temperature in Centigrade : ";
    cin>>cen;

    float ans2 = t2.toFahrenheit(cen);
    cout<<"\n Temperature in Fahrenheit : "<<ans2;

    return 0;
}