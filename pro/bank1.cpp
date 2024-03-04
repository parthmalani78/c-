
#include<iostream>

using namespace std;
int curbal;

class bank
{
    public:
         int pin=0;
         void  getpin()
         {
            cout<<"Enter the  Pin number:- ";
            cin>>pin;

            if(pin==1010)
            {
                curbal=50000;
                cout<<"Account Holder Name:- Parth Malani."<<endl;
                cout<<"Account Number:- 01020304."<<endl;
                cout<<"Cuurent Balance:- RS."<<curbal<<endl;
            }
            else if(pin==2020)
            {
                curbal=100000;
                cout<<"Account Holder Name:- Darshan Dhameliya."<<endl;
                cout<<"Account Number:- 12345678."<<endl;
                cout<<"Cuurent Balance:- RS."<<curbal<<endl;
            }
            else if(pin==3030)
            {
                curbal=150000;
                cout<<"Account Holder Name:- Charmi Sojitra."<<endl;
                cout<<"Account Number:- 98765432."<<endl;
                cout<<"Cuurent Balance:- RS."<<curbal<<endl;
            }
            else if(pin==4040)
            {
                curbal=80000;
                cout<<"Account Holder Name:- Anuj Rathod."<<endl;
                cout<<"Account Number:- 95015258."<<endl;
                cout<<"Cuurent Balance:- RS."<<curbal<<endl;
            }
            else
            {
                cout<<"Your Pin is Invalid!!";
            }

         }
         void bankdetails()
         {
            int choice;
            cout<<"\n Select the No. to view the details ------->" << endl;
            cout<<"(1). Withdrawal"<<endl;
            cout<<"(2). Depositie"<<endl;
            cout<<"(3). Your Current Balance"<<endl;
            cout<<"(4). Loan  Application"<<endl;
            cout<<"(0).EXIT"<<endl; 
         }
};
int main()
{
    bank  b;
    b.getpin();

    int choice,withdraw=0,depositie=0,loan,year;
    float intrest ,amount;

    do
    {
        b.bankdetails();
        cout<<"Enter the choice:- ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter the amount you want to withdraw:- ";
                cin>>withdraw;

                curbal-=withdraw;

                cout<<"Balance After Withdrawal Amount:- "<<curbal<<endl;
                cout<<"\n";
                break;
                
            case 2:
                cout<<"Enter The Depositie Amount:- ";
                cin>>depositie;

                curbal+=depositie;

                cout<<"Your New Balance is :- "<<curbal<<endl;
                cout<<"\n";
                break;

            case 3:
                cout<<"Your  Current Balance is:- "<<curbal<<endl;
                cout<<"\n";
                break;

            case 4:
                cout<<"\n Enter the Amount You Want Loan:- ";
                cin>>loan;
                cout<<"\n Enter the Interest Rate per Year:- ";
                cin>>intrest;
                cout<<"\n Enter the year:- ";
                cin>>year;

                amount=loan*(intrest/100)*year;
                cout<<"\n This is Final Amount:- "<<amount<<endl;

                break;

                case 0:
                    cout<<"Thank You Please Visit  Again!!"<<endl;
                    break;

        }
    } while (choice!=0);
    
    return 0;    

}