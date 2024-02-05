#include<iostream>

using namespace std;
int  main() 
{
    int x,y,z;
    
    cout<<"enter the value:-";
    cin>>x;

    cout<<"enter the value:-";
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<"this value is :- "<<x;
    cout<<"this value is :- "<<y<<endl;
    return 0; 
}