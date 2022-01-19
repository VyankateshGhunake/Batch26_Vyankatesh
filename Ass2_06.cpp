/* WAP to input gender and age of an Employee and check whether the Employee is eligible 
for the Insurance or not in the following Conditions
 1. if Emp is male and age>=35
 2. if Emp is female and age>=25
Use Appropriate Function which accepts gender and age as arguments and returns 1 is 
conditions are satisfied otherwise returns 0. And if invalid input from the user 
then any non-zero value except 1 is returned. */

#include<iostream>
#include<string.h>

using namespace std;
    int findByEligible(char gen[],int age)
    {
        if(stricmp(gen,"male")==0 && age>=35 || stricmp(gen,"female")==0 && age>=25)
        return 1;
        else if(stricmp(gen,"male")==0 && age<35 || stricmp(gen,"female")==0 && age<25)
        return 0;
        else
        return -1;
    }

int main()
{
    char gen[10];
    int age;
    cout<<"\n Enter Gender of the Employee : ";
    cin>>gen;

    cout<<"\n Enter Age : ";
    cin>>age;

    int ans = findByEligible(gen,age);
    if(ans==1)
    cout<<"\n The Employee is eligible for Insurance..!";
    else if(ans==0)
    cout<<"\n The Employee is not eligible for Insurance..!";
    else
    cout<<"\n Invalid input..!";
    return 0;
}