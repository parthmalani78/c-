#include<iostream>

using namespace std;

class base
{
    public:
        int a=10;
        virtual void print()=0;

};
class  derived :public base
{
    public:
        void print(){
            cout<<"the value of a:- "<<a<<endl;
        }
};

int main()
{
    base *a;
    derived b;

    a=&b;
    a->print();

    return 0;
}
