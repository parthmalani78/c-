#include<iostream>

using namespace  std;

class report
{
    private:
        int admno;
        char name[50];
        float marks[5];
        float avarage=0;
         void getavg()
        {
            for(int i = 0 ;i < 5 ; i++)
            {
            avarage= avarage + marks[i] ;
            }
            avarage = avarage*100/500;
        }
    public :
    void readinfo()
    {
        cout << "Enter Admission Number:- ";
        cin >> admno ;
        cout << "Enter Name:- ";
        cin >> name ;
       
        for (int i = 0 ; i < 5 ; i++ )
        {
             cout << "Enter the Marks of subjects "<< i+1 << " :- ";
            cin >> marks[i] ;
        }
        getavg();
    }
    void  displayinfo()
    {
        cout<<"\n\nshowthadata:- "<<endl;
        cout << "Admission No:- " << admno << endl;
        cout << "Name:- " << name <<endl;
        
        for (int i = 0 ; i < 5 ; i ++)
        {
           cout << "Subject - " << i+1 << " :- " << marks[i] << endl ;
        }
        cout << "Average of the marks is : " << avarage<<endl ;
    }
      
};


int main()
{
    report  r1;
    r1.readinfo();
    r1.displayinfo();
}