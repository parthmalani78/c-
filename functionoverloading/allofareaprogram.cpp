#include<iostream>

using namespace std;

void area(double pi,int r)
{
    double total=pi*r*r;
    cout<<"The Area of the circle is : "<<total<<endl;
};

void area(int a)
{
    int  total=a*a;
    cout<<"The Area of the square is : "<<total<<endl;
};
void area(int length ,int width)
{
    int total=length*width;
    cout<<"The Area of the rectangle is : "<<total<<endl;
};
void area(int height,double base)
{
    int total=height*base/2;
    cout<<"The Area of the triangle is : "<<total<<endl;
};
int main()
{
    area(3.14,50);
    area(20);
    area(4,5);
    area(50,3.2);
    return 0;
}

