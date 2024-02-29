#include<iostream>

using namespace std;

class base
{
    public:
        int a,b;
        void sumdata()
        {
            cout<<"enter the value of a:- ";
            cin>>a;
            cout<<"enter  the value of b:- ";
            cin>>b;
        } 
};
class derive1 : public  base
{
    public:
    void sum()
    {
        cout<<"sum of  a and b is:- "<<a+b<<endl;
    }

};

class base2
{
    public :
        int c,d;
        void multidata()
        {
            cout<<"Enter the value of c :-";
            cin>>c;
            cout<<"Enter the value of d :-";
            cin>>d;
        }
};

class derive2 : public derive1 ,public base2
{
    public:
    void multiply()
    {
        cout<<"multiply of c and d is:- "<<c*d<<endl;
    }
};

int main()
{
    derive2  obj;
    obj.sumdata();
    obj.sum();
    obj.multidata();
    obj.multiply();
}

