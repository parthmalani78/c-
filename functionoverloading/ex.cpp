#include<iostream>

using namespace std;
 void sum(int a, int b) 
 {
    cout <<a+b<<endl;
 };
 void sum(double c,double d)
 {
    cout<<c+d<<endl;
 };
 int main()
{
    sum(50,1);
    sum(10.23,19.23);
    return 0;
}