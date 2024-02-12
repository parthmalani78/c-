#include<iostream>

using namespace std;

class student
{
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
    float ctotal()
    {
        total=eng+math+science;
        return total;
    }
    public:
        student();
        void takedata()
        {
            cout<<"student the admno:- "<<admno<<endl;
            cout<<"student name:- "<<sname<<endl;
            cout<<"student  marks in english:- "<<eng<<endl;
            cout<<"student marks in maths:- "<<math<<endl;
            cout<<"student marks in science:- "<<science<<endl;
            total=ctotal();
            cout<<"Total Marks:- "<<total<<endl;
        }
};
student::student()
{
    cout<<"enter the admno:- ";
    cin>>admno;
    cout<<"Enter the name of the student:- ";
    cin>>sname;
    cout<<"enter the marks of english:-";
    cin>>eng;
    cout<<"enter the marks of maths:-";
    cin>>math;
    cout<<"enter the marks of science:-";
    cin>>science;
}
int main()
{
    student s1;
    s1.takedata();
    return 0;
}
