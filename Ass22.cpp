/* WAP to create a class ARRAY with member function getarray() which accepts 
the array elements. Define 2 different objects of that class ARRAY as a1 and a2.
Get array values in object a1 and in object a2.Define a function calculate() which 
accepts the objects as arguments and performs addition of array from object a1 and a2 */

#include<iostream>

using namespace std;
    class ARRAY
    {
        public:
            int x,y,z;
            
            int getarray(int x,int y,int z)
            {
                this->x = x;
                this->y = y;
                this->z = z;
            }

            void show()
            {
                cout<<"\t"<<this->x<<"\t"<<this->y<<"\t"<<this->z;
            }

    };

     int calculate(ARRAY a1,ARRAY a2);
int main()
{
    ARRAY a1,a2;

    cout<<"\n Array a1 : ";
    a1.getarray(56,23,28);
    a1.show();

    cout<<"\n Array a2 : ";
    a2.getarray(22,15,39);
    a2.show();

    calculate(a1,a2);
    return 0;
}
    int calculate(ARRAY a1,ARRAY a2)
            {
                int s1,s2,s3,s4[3];
                
                s1 = a1.x + a2.x;
                s2 = a1.y + a2.y;
                s3 = a1.z + a2.z;

                cout<<"\n Addition of Array a1 & a2 :\t"<<s1<<"\t"<<s2<<"\t"<<s3;
                
            }