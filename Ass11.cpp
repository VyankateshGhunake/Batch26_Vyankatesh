/*WAP to perform addition,subtraction,multiplication and division using pointer variable.*/

#include<iostream>

using namespace std;

    int addNum(int *num1,int *num2)
    {
        return(*num1+*num2);
    }

    int subNum(int *num1,int *num2)
    {
        return(*num1-*num2);
    }

    int multNum(int *num1,int *num2)
    {
        return((*num1) * (*num2));
    }

    float divNum(int *num1,int *num2)
    {
        return(float(*num1)/float(*num2));
    }
int main()
{
    int a,b;

    cout<<"\n Enter any two numbers : ";
    cin>>a>>b;

    int ans1 = addNum(&a,&b);
    cout<<"\n Addition : "<<ans1;

    int ans2 = subNum(&a,&b);
    cout<<"\n Subtraction : "<<ans2;

    int ans3 = multNum(&a,&b);
    cout<<"\n Multiplication : "<<ans3;

    float ans4 = divNum(&a,&b);
    cout<<"\n Division : "<<ans4;
    return 0;
}