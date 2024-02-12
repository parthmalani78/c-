#include<iostream>

using namespace std;

class Deploy
{
    int a,b;
    public:
        Deploy(int a1,int a2)
        {
            a=a1;
            b=a2;
        };
        Deploy(int a1)
        {
            a=a1;
            b=0;
        };
        void printdata()
        {
            cout<< a <<" "<<b <<endl;
        };
};
int main()
{
    Deploy  deploy(10,20);
    deploy.printdata();
    Deploy  deploy1(10);
    deploy1.printdata();
    return 0;

}