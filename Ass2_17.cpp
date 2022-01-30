/* WAP to Declare a Shared Variable as Count. Define a function which counts the number of 
Students have been enrolled from the class Student. */

#include<iostream>

using namespace std;
    class Student
    {
        public:
            static int Count;

        static void countStudents()
        {
            cout<<"\n Count of Students in the class : "<<Count;
        }
    };
    int Student::Count = 52;
int main()
{
    Student s;
    s.countStudents();
    Student::countStudents();
    return 0;
}