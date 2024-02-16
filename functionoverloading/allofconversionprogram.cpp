#include<iostream>

using namespace std;

void conversion(int dollar,double rupee)
{
    int total=dollar*rupee;
    cout<<"this value is:- "<<total<<endl;
};
void conversion(int feet,int inch)
{
    int total=feet*inch;
    cout<<"this value is:- "<<total<<endl;
};
void conversion(double centimeter,int inch)
{
    int total=inch*centimeter;
    cout<<"this value is:- "<<total<<endl;
};
void conversion(float celsuis)
{
    float total=(celsuis*9/5)+32;
    cout<<"this fahernheit is:- "<<total<<endl;
};
int main()
{
    conversion(5,85.5);
    conversion(21,3);
    conversion(2.54,5);
    conversion(101);
    return 0;
}