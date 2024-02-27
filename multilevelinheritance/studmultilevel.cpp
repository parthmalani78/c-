#include <iostream>

using namespace std;

class studentinfo
{
    public:
    int id;
    char name[20];

    void studentidname()
    {
        cout << "Enter student ID :- ";
        cin >> id;
        cout << "Enter student name :- ";
        cin >> name;
    }

    void studentidnamedisplay()
    {
        cout << "Student ID is :- " << id << endl;
        cout << "Student Name is :- " << name << endl;
    }

};

class studentmarks : public studentinfo
{
    public:
    int eng,hindi,guj;
    void marks()
    {
        cout << "Enter marks of english :- ";
        cin >> eng;
        cout << "Enter marks of hindi :- ";
        cin >> hindi;
        cout << "Enter marks of gujarati :- ";
        cin >> guj;
        
    }

    void displaystudentmarks()
    {
        cout << "Student marks of english :- " << eng << endl;
        cout << "Student marks of hindi :- " << hindi << endl;
        cout << "Student marks of gujarati :- " << guj << endl;
        
    }
};

class studenttotalmarks : public studentmarks
{
    public:
    int total,per;
    void totalmarks()
    {
        total = eng + hindi + guj;
        per = total / 3;
    }

    void displaytotalmarks()
    {
        cout << "Total marks of student is :- " << total << endl;
        cout << "Percentage of student is :- " << per << endl;
    }
    void space()
    {
        cout << endl;
    }
    
};

int main()
{
    studenttotalmarks s[3];

    for(int i=0;i<3;i++)
    {
        s[i].space();
        s[i].studentidname();   
        s[i].marks();
        s[i].totalmarks();
    }

    for(int i=0;i<3;i++)
    {
        s[i].space();
        s[i].studentidnamedisplay();
        s[i].displaystudentmarks();
        s[i].displaytotalmarks();
    }
      return 0;
}