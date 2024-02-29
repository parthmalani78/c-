#include<iostream>

using namespace  std;

int eng,eco,state;

class student
{
     public:
        int id;
        char name[20];

        void studentdata()
        {
            cout<<"Enter the student ID:- ";
            cin>>id;
            cout<<"Enter the student Name:- ";
            cin>>name;
            cout<<"Enter the  Englsih Marks:- ";
            cin>>eng;
            cout<<"Enter the Economics Marks:- ";
            cin>>eco;
            cout<<"Enter the Statics Marks:- ";
            cin>>state;
        }

};
class derive1 :   public student
{
    public:
        void  display()
        {
            cout<<"Student ID:- "<<id<<endl;
            cout<<"Student Name:- "<<name<<endl;
            cout<<"English Marks:- "<<eng<<endl;
            cout<<"Economics Marks:- "<<eco<<endl;
            cout<<"Statics  Marks:- "<<state<<endl;
        }
};
class studenttotal
{
    public:
        int total;
        float per;

        void totalinfo()
        {
            total=eng+eco+state;
            per=total*100/300;
        }
};

class derive2 :  public derive1,public studenttotal
{
    public:
        void  showtotal()
        {
            cout<<"this is total of  all subjects marks:- "<<total<<endl;
            cout<<"this is a percentage of student:- "<<per<<endl;
        }
};

int main()
{
    derive2 obj[3];

    for(int i=0;i<3;i++)
    {
        obj[i].studentdata();
        obj[i].totalinfo();

    }
    for(int  j=0;j<3;j++)
    {
        obj[j].display();
        obj[j].showtotal();
    }

    return 0;
}
