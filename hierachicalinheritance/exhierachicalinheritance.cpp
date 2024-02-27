#include<iostream>

using namespace std;

class base
{
    public:
        int a;
        int b;
        void adddata()
        {
            cout<<"Enter  the value of a:- ";
            cin>>a;
            cout<<"Enter the value of b:- ";
            cin>>b;
        }
};
class derive1 : public base
{
    public:
        void sum()
        {
            cout<<"Sum of a and b:- "<<a+b<<endl;
        }
};
class derive2 : public base
{
    public:
        void multi()
        {
            cout<<"Multi of a and b:- "<<a*b<<endl;
        }
};

int main()
{
    derive1  d1;
    derive2  d2;
    d1.adddata();
    d1.sum();
    d2.adddata();
    d2.multi();
}