#include<iostream>

using namespace std;
int main()
{
    int inch;
    float centi=2.54;
    float total=0;
    cout<<"Enter the value of inches : ";
    cin>>inch;

    total=inch*centi;
    cout<<"this is total:-"<<total;
    return 0;
}
