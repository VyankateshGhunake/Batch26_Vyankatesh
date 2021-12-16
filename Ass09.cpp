/*WAP to display ASCII value of any character. 
[ASCII = American Standard Code for Information Interchange] [a to z = 97 to 122 & A to Z = 65 to 90]*/

#include<iostream>

using namespace std;

    int asciiOfChar(char ch)
    {
        return int(ch);
    }
int main()
{
    char ch;
    cout<<"\n Enter any Character : ";
    cin>>ch;

    int ans = asciiOfChar(ch);
    cout<<"\n ASCII value of character : "<<ans;
    return 0;
}