/* Function Overloading : WAP to overload the function which displays the data to be passed by 
the user
            void show() void show(char ch) void show(char ch[]) void show(String s) */
        
#include<iostream>
#include<string.h>

using namespace std;
    class Data
    {
        public:
        void show()
        {
            cout<<"\n Hii..!";
        }
        void show(char ch)
        {
            cout<<"\n "<<ch;
        }
        void show(char ch[])
        {
            cout<<"\n "<<ch;
        }
        void show(string s)
        {
            cout<<"\n "<<s;
        }
    };
int main()
{
    Data d;
    d.show();
    d.show('v');
    d.show("Vyankatesh");
    d.show("Vyankatesh Ghunake");
    return 0;
}
