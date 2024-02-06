#include<iostream>

using namespace  std;

class student
{
    private:
        int admno;
        char sname[20];
        float eng, math, science; 
        float  total;
        float ctotal()
        {
            total=eng+math+science;
            return total;
        }

    public:
        void takedata()
        {
            cout << "Enter the admno:-" ;
            cin >> admno;
            cout << "Enter the name of the student:-";
            cin>>sname;
            cout<<"enter the marks of english:-";
            cin>>eng;
            cout<<"Enter the marks of mathematics:-";
            cin>>math;
            cout<<"Enter the marks of Science:-";
            cin>>science;
            total = eng + math + science;
        }
        void showdata()
        {
            cout<<"\n\nshowdata:-"<<endl;
            cout << "Admission No:-" <<admno<<endl; 
            cout << "Name:-" <<sname<<endl;
            cout<<"Eng Marks:-"<<eng<<endl;
            cout<<"Math Marks :-"<<math<<endl;
            cout<<"Sciences Marks:-"<<science<<endl;
            cout<<"Total Marks:-"<<ctotal()<<endl;
        }
};
int main()
{
    student s1;
    s1.takedata();
    s1.showdata();
    return 0;
}