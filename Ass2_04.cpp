/* WAP to input Distance between the Cities in Km and Convert it into Meter,Centimeter,
Feet and Inches */

#include<iostream>

using namespace std;
    
    float toMeter(float dist)
    {
        return(dist*1000);
    }

    float toCentimeter(float dist)
    {
        return(dist*100000);
    }

    float toFeet(float dist)
    {
        return(3.281*1000*dist);
    }

    float toInches(float dist)
    {
        return(39.3701*1000*dist);
    }
int main()
{
    float dis;

    cout<<"\n Enter Distance between the Cities in Km : ";
    cin>>dis;

    float ans1 = toMeter(dis);
    cout<<"\n Distance in Meters : "<<ans1;

    float ans2 = toCentimeter(dis);
    cout<<"\n Distance in Centimeters : "<<ans2;

    float ans3 = toFeet(dis);
    cout<<"\n Distance in Feet : "<<ans3;

    float ans4 = toInches(dis);
    cout<<"\n Distance in Inches : "<<ans4;

    return 0;
}

