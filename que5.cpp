
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. Mostly they do, but sometimes a car goes by without paying. 
//The tollbooth keeps track of the number of cars that have gone by and of the total //amount of money collected.Model this tollbooth with a class called tollBooth.
//The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected.
//A constructor initializes all data members to 0.A member function called payingCar( ) increments the car total and adds 0.50 to the cash total.
//Another function, called nopayCar( ) increments the car total but adds nothing to the cash total.
//Finally, a member function called PrintOnConsole( ) displays the two totals and number of paying as well as non paying cars total.


#include<iostream>
using namespace std;

    class Tollbooth
    {
        int ncar,car,totalcar,npaidcard,paidcar;
        float totalamt;

    public:

        Tollbooth()
        {
              totalcar=0;
              npaidcard=0;
              paidcar=0;
              totalamt=0.0;
              car=0;
              ncar=0;
        }

        void tollpaid()
        {
            totalcar=totalcar+1;
            totalamt=totalamt+0.50;
            cout<<"\n\n\tDetail Updated Susessfully....";
            ++car;
        }

        void tollnotpaid()
        {
            totalcar=totalcar+1;
            totalamt=totalamt+0;
            cout<<"\n\n\tDetail Updated Susessfully....";
            ++ncar;
        }

        void PrintOnConsole()
        { 
            cout<<"\n\n--------------------------------------------------------------------------------------";

            cout<<"\n\tToll Details : \n\t Total Car : "<<totalcar<<"\n\t Total Amount : "<<totalamt;
            cout<<"\n\n\t Paid Car : "<<car;
            cout<<"\n\t Not Paid Car : "<<ncar;

        }

};



int main ()
{   
    Tollbooth tb;
    int choice;

    ::Tollbooth();
    

    
    cout<<"\n\n";

    do
    {
        cout<<"\n\n\n------------------Option Menu------------------";
        cout<<"\n\t 1.  Add Paid Car";
        cout<<"\n\t 2.  Add Not Paid Car";
        cout<<"\n\t 3.  Display TOLLBOOTH Details";
     
        cout<<"\n\t 0.  Exit";

        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1 :
            tb.tollpaid();
            break;

        case 2 :
        
            tb.tollnotpaid();         
            break;

        case 3 :
        
            tb.PrintOnConsole();
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

