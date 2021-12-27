/* Write a menu driven program to perform 1. Add Book [Book No,Book Name, Book price]
2. Display Book 3. Search Book 4. Display all books 5. Exit. */

#include<iostream>
#include<string.h>
#include<unistd.h>
#include<iomanip>

using namespace std;

    void showMenu()
    {
        cout<<"\n Select the choice from the following..";
        cout<<"\n 1. Add Book"<<"\n 2. Display Book"
        <<"\n 3. Search Book"<<"\n 4. Display all books"<<"\n 5. Exit";
    }

    void Display(int num)
    {
        switch(num)
        {
            case 101:
            cout<<"\n 101"<<"\tSpirituality"<<"\tRs.400";
            break;
            case 102:
            cout<<"\n 102"<<"\tScience"<<"\tRs.250";
            break;
            case 103:
            cout<<"\n 103"<<"\tPhysics"<<"\tRs.350";
            break;
            case 104:
            cout<<"\n 104"<<"\tBiology"<<"\tRs.450";
            break;
            case 105:
            cout<<"\n 105"<<"\tChemistry"<<"\tRs.280";
            break;
            default:
            cout<<"\n"<<num<<" number book is not exist..!";
        }
    }

    void allBooks()
    {
        
            cout<<"\n 101"<<setw(15)<<"Spirituality"<<"\tRs.400";
            cout<<"\n 102"<<setw(15)<<"Science"<<"\tRs.250";
            cout<<"\n 103"<<setw(15)<<"Physics"<<"\tRs.350";
            cout<<"\n 104"<<setw(15)<<"Biology"<<"\tRs.450";
            cout<<"\n 105"<<setw(15)<<"Chemistry"<<"\tRs.280";
    }

    void searchByName(char name[])
    {
        if(stricmp(name,"Spirituality")==0)
        cout<<"\n "<<name<<" Book Exist in the List..!";
        else if(stricmp(name,"Science")==0)
        cout<<"\n "<<name<<" Book Exist in the List..!";
        else if(stricmp(name,"Physics")==0)
        cout<<"\n "<<name<<" Book Exist in the List..!";
        else if(stricmp(name,"Biology")==0)
        cout<<"\n "<<name<<" Book Exist in the List..!";
        else if(stricmp(name,"Chemistry")==0)
        cout<<"\n "<<name<<" Book Exist in the List..!";
        else
        cout<<"\n "<<name<<" Book does not exist in the List..!";
    }
int main()
{
    int choice,bookNum,num;
    char bookName[20],name[20];
    float bookPrice;
    
    showMenu();
    cout<<"\n Enter the choice number : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            cout<<"\n You have selected Add Book option..!";
            cout<<"\n Please enter following details..";
            cout<<"\n Enter Book number : ";
            cin>>bookNum;
            cout<<"\n Enter Book name : ";
            cin>>bookName;
            cout<<"\n Enter Book price : ";
            cin>>bookPrice;
            cout<<"\n Your book is successfully added to the list..!";
        }
        break;
        case 2:
        {
            cout<<"\n You have selected Display Book Option..!";
            cout<<"\n Enter Book number to display : ";
            cin>>num;
            Display(num);
        }
        break;
        case 3:
        {
            cout<<"\n You have selected Search Book Option..!";
            cout<<"\n Enter Book name to search : ";
            cin>>name;
            searchByName(name);
        }
        break;
        case 4:
        {
            cout<<"\n You have selected Display All Books Option..!";
            allBooks();
        }
        break;
        case 5:
        {
            cout<<"\n Exit..!";
            sleep(5);
            system("cls");
        }
        break;
        default:
        {
            cout<<"\n You have entered wrong choice..!";
        }
    }
    return 0;
}