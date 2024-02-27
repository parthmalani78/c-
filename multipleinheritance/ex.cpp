#include<iostream>

using namespace std;
class base1
{
    protected:
    int a1;
    public:
    void setnumber1(int x1)
    {
        a1=x1;
    }
};
class base2
{
    protected:
    int a2;
    public:
    void setnumber2(int x2)
    {
        a2=x2;
    }
};

class derived : public base1,public base2
{
    public:
    void show()
    {
        cout<<"the  value of a1 is:- "<<a1<<endl;
        cout<<"the  value of a2 is:- "<<a2<<endl;
        cout<<"this is a sum:- "<<a1+a2;
    }
};
int main()
{
    derived  d;
    d.setnumber1(5);
    d.setnumber2(8);
    d.show();

}