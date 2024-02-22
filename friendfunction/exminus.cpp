#include<iostream>

using namespace std;

class Complex
{
    int x,y;
    public:
        friend Complex subnumber(Complex o1,Complex o2); 
        void setdata(int a,int b)
        {
            x = a;
            y = b;
        }
        void display()
        {
            cout<<"data of a-b:- "<< x <<" - "<< y <<endl;
        }
};
Complex subnumber(Complex o1 , Complex o2 )
{
    Complex o3;
    o3.setdata((o1.x-o2.x), (o1.y-o2.y));
    return o3;
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,7);
    c1.display();

    c2.setdata(9,4);
    c2.display();

    c3=subnumber(c1,c2);
    c3.display();
    
    return 0;
}