#include<iostream>

using namespace std;

class Complex
{
    int x,y;

    public:
        Complex(int a,int b)
        {
            x = a;
            y = b;
        }
        void display()
        {
            cout<<"the real part:- "<<x<<endl;
            cout<<"the imginary part:- "<<y<<endl;
        }
        Complex operator--(int)
        {
            x--;
            y--;
        }
};
int main()
{
    Complex c1(10,15);
    c1--;
    c1.display();
    return 0;
}