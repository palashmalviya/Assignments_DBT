// Write a menu driven program for Date in a C++ language.
// Declare a structure Date having data members day, month, year. Implement the
// following member functions.
// void InitDate();
// void PrintDateOnConsole();
// void AcceptDateFromConsole();
// bool IsLeapYear();


#include<iostream>
using namespace std;

    typedef struct date
    {
        int day,month,year;
        void InitDate();
        void PrintDateOnConsole();
        void AcceptDateFromConsole();
        bool IsLeapYear();

    }Date;


    void Date::InitDate()
        {
            day=01; 
            month=01;
            year=0001;

            cout<<"\n\n\tInitalized Date : "<<day<<"-"<<month<<"-"<<year;
        }


    void Date::PrintDateOnConsole()
        {
            cout<<"\n\tDate : "<<day<<"-"<<month<<"-"<<year;
        }


    void Date::AcceptDateFromConsole()
        {
            cout<<"\n\tEnter Date : \n\t Day : ";
            cin>>day;
            cout<<"\t Month : ";
            cin>>month;
            cout<<"\t Year : ";
            cin>>year;
        }


    bool Date::IsLeapYear()
        {
            if(year%4==0)
                return true;
            
            else
                return false;
                        
        }

int main ()
{
    Date D;
    int choice;
    bool check;
    cout<<"\n\n";

    do
    {
        cout<<"\n\n\n------------------Option Menu------------------";
        cout<<"\n\t 1.  Initalize Date Automatic";
        cout<<"\n\t 2.  Display Date";
        cout<<"\n\t 3.  Input Date";
        cout<<"\n\t 4.  Check Leap Year";
        cout<<"\n\t 0.  Exit";

        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1 :
            D.InitDate();
            break;

        case 2 :
            D.PrintDateOnConsole();
            break;

        case 3 :
            D.AcceptDateFromConsole();
            break;

        case 4 :
            check=D.IsLeapYear();
             if(check==1)
                 cout<<"\n\t Leap Year.";
             else
                 cout<<"\n\t Not leap Year.";
            break;

        case 0 :
            cout<<"Exiting.......";
            break;

        default:
        cout<<"Wrong Input.....";
            break;
        }
    } while (choice!=0);
      
    
    
    return 0;
}