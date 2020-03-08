
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Write a menu driven program for Date in a C++ language.
// Declare a class Date having data members day, month, year. Implement the following
// member functions.
// Date();
// Date(int day, int month, int year);
// void PrintDateOnConsole();
// void AcceptDateFromConsole();
// bool IsLeapYear();


#include<iostream>
using namespace std;

    class Date
    {
        int day,month,year;

    public:

        Date()
        {
                day=0; 
                month=0;
                year=0;
                cout<<"\n\n\tInitalized Date With Default Constructor : "<<day<<"-"<<month<<"-"<<year;
        }

        Date(int day,int month,int year)
        {
                this->day=day;
                this->month=month;
                this->year=year;

                cout<<"\n\n\tInitalized Date With Parameterized Constructor : "<<this->day<<"-"<<this->month<<"-"<<this->year;
        }


        void PrintDateOnConsole()
        { 
            cout<<"\n\tDate : "<<this->day<<"-"<<this->month<<"-"<<this->year;
        }

        void AcceptDateFromConsole()
        {
            cout<<"\n\tEnter Date : \n\t Date : ";
            cin>>day;
            cout<<"\t Month : ";
            cin>>month;
            cout<<"\t Year : ";
            cin>>year;
        }

        bool IsLeapYear()

        {   if(this->year%4==0)
            {
               cout<<"\n\t Leap Year.";
            }
            
            else
                cout<<"\n\tNot Leap Year.";
        }

    };



int main ()
{   
    Date date;
    int choice;
    cout<<"\n\n";

    do
    {
        cout<<"\n\n\n------------------Option Menu------------------";
        cout<<"\n\t 1.  Initalize Date With Default Constructor";
        cout<<"\n\t 2.  Initalize Date With Parameterized Constructor";
        cout<<"\n\t 3.  Display Date";
        cout<<"\n\t 4.  Input Date";
        cout<<"\n\t 5.  Check Leap Year";
        cout<<"\n\t 0.  Exit";

        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1 :
            Date();
            break;

        case 2 :
        
            Date(1,1,1);
          
            break;

        case 3 :
        
            date.PrintDateOnConsole();
            break;

        case 4 :
            date.AcceptDateFromConsole();
            break;

        case 5 :
        
            check = date.IsLeapYear();
                  
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

