#include <iostream>

using namespace std;

class base
{
    public:
    int a = 10;

    virtual void print()
    {
        cout << "Value :- " << a << endl;
    }
};

class derived : public base
{
    public:
    void print()
    {
        cout << "The value of a is :- " << a << endl;
    }
};

int main()
{
    base *a;
    derived b;
    a = &b;
    a->print();
    return 0;
}
