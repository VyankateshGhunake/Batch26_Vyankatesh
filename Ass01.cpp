/*WAP to calculate area of circle,Triangle and square. 
 of circle = 3.14*rad*rad, Area of triangle = 0.5*base*height, Area of square = side*side]*/

 #include<iostream>
 
 using namespace std;
    float areaOfCircle(float rad)
    {
        return 3.14*rad*rad;
    }

    float areaOfTriangle(float b,float h)
    {
        return 0.5*b*h;
    
    }
    float areaOfSquare(float s)
    {
        return s*s;
    }

 int main()
 {
     float Ans1 = areaOfCircle(11.5f);
     cout<<"\n Area of Circle :"<<Ans1;
     float Ans2 = areaOfTriangle(10.25f,20.00f);
     cout<<"\n Area of Triangle :"<<Ans2;
     float Ans3 = areaOfSquare(21.5f);
     cout<<"\n Area of Square :"<<Ans3;
 }