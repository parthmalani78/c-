#include<iostream>

using namespace std;

class Deploy
{
    int a,b;
    public:
        Deploy();
        void printdata()
        {
            cout<< a << " " << b << endl;
        }
};
Deploy::Deploy()
{
    a = 10;
    b = 20;
}

int main()
{
    Deploy deploy;
    deploy.printdata();
    return 0;
}