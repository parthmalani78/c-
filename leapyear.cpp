#include<iostream>

using namespace std;
int main()
{
    int year;

    cout<<"enter the year:-";
    cin>>year;

    if(year%4==0)
    {
        cout<<"this is a leap year"<<endl;
    }
    else
    {
        cout<<"this is not a leap year"<<endl;
    }
}