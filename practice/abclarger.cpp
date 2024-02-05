#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter the first value:-";
    cin>>a;

    cout<<"enter the second value:-";
    cin>>b;

    cout<<"enter the third value:-";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<"a is larger";
    }
    else if(b>c && b>a)
    {
        cout<<"b is larger";
    }
    else
    {
        cout<<"c is larger";
    }
}