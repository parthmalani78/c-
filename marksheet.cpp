#include<iostream>

using namespace std;

int main()
{
    int guj,eng,eco,total;
    float per;

    cout<<"enter  the marks of Guj:-";
    cin>>guj;

    cout<<"enter the marks of eng:-";
    cin>>eng;;

    cout<<"enter  the marks of eco:-";

    cin>>eco;
    
    total=guj+eng+eco;

    cout<<"this is total:-"<<total<<endl;

    per=total*100/300;

    cout<<"this is percentage:-"<<per<<endl;

    return 0;
}