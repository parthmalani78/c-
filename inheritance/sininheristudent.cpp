#include<iostream>

using namespace std;

class base
{
    public:
    int id,eng,eco,state,total;
    char name[20];
    float per;

    void studentdata()
    {
        cout<<"enter the student id:- ";
        cin>>id;
        cout<<"enter the student name:- ";
        cin>>name;
        cout<<"enter english marks:- ";
        cin>>eng;
        cout<<"enter economics marks:- ";
        cin>>eco;
        cout<<"enter statics marks:- ";
        cin>>state;
        cout<<"\n";
    }
    void studentdetail()
    {
        cout<<"this is student id:- "<<id<<endl;
        cout<<"this is  student name:- "<<name<<endl;
        cout<<"this is  english marks:- "<<eng<<endl;
        cout<<"this is  economics marks:- "<<eco<<endl;
        cout<<"this is  statics marks:- "<<state<<endl;
    }

};   
class derive : public base
{
    public:
    void  calctotal()
    {
        total=eng+eco+state;
        per=total*100/300;
    }
};

int main()
{
    derive d1[3];
    for(int i=0;i<3;i++)
    {
        d1[i].studentdata();
       
    }
    for(int  i=0;i<3;i++)
    {
        d1[i].calctotal();
    }
    for(int  i=0;i<3;i++)
    {
        d1[i].studentdetail();
        cout<<"this is a total marks:- "<<d1[i].total<<endl;
        cout<<"this is a percentage:-  "<<d1[i].per<<endl;
        cout<<"\n\n";

        
    }
    return 0;

}

