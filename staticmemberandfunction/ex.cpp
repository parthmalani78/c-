#include<iostream>

using namespace std;

class Employee
{
    public:
        int id;
        static int count;
        void setdata()
        {
            cout<<"Enter the Employee is:- ";
            cin>>id;
            count++;
        }
        void printdata()
        {
            cout<<"Employee is is:- "<< id <<endl;
        }
        static void employeecount()
        {
            cout<<"the count of employee:- "<<count<<endl;
        }
};
int Employee::count;
int main()
{
    Employee parth,darshan,vivek;

    parth.setdata();
    parth.printdata();
    parth.employeecount();

    darshan.setdata();
    darshan.printdata();
    darshan.employeecount();

    vivek.setdata();
    vivek.printdata();
    vivek.employeecount();
    return 0;

}