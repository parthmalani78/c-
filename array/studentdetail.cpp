#include<iostream>

using namespace std;

class student
{
    int id,marks;
    char name[20];
    public:
        void addata()
        {
            cout<<"enter the student id:- ";
            cin>>id;
            cout<<"enter the student name:- ";
            cin>>name;
            cout<<"enter the student marks:-";
            cin>>marks;
        }

        void display()
        {
            cout<<"\nthis is a student id:- "<<id<<endl;
            cout<<"this is a student name:- "<<name<<endl;
            cout<<"this is a student marks:- "<<marks<<endl<<endl;

        }
};
int main()
{
    student s1[3];
    for(int i=0;i<3;i++)
    {
        s1[i].addata();
        s1[i].display();
    }
    return 0;

}