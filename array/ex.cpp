#include<iostream>

using namespace std;

class Complex
{
    int x,y;
    public:
        void addata()
        {
            cout<<"enter thr x value:- ";
            cin>>x;
            cout<<"enter the y value :-";
            cin>>y;
        }
        void display()
        {
            cout<<"the real part:- "<< x << endl;
            cout<<"the imginary part:- "<< y <<endl;
        }
};
int main()
{
    Complex c1[3];
    for(int i=0;i<3;i++)
    {
        c1[i].addata();
        c1[i].display();

        
    }
    return 0;
}