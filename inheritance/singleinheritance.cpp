#include<iostream>

using namespace std;

class base
{
    public:
        int a;
        int b;
        int total=0;
};
class  derive : public base
{
    public:
        void totaldata()
        {
            a=10;
            total=a+b;
        }
};
int main()
{
    derive d1;
    d1.b=20;
    d1.totaldata();
    cout<<"Total data:-  "<<d1.total<<endl;
    return 0;
}