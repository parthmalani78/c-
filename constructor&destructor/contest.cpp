#include<iostream>

using namespace std;

class test
{
    int testcode;
    char description[20];
    int Nocandidate;
    int CenterReqd;
    int calcnter()
    {
        CenterReqd=Nocandidate/100+1;
        return CenterReqd;

    }

    public:
        test();
        void schedule()
        {
            cout<<"testcode:- "<<testcode<<endl;
            cout<<"description:- "<<description<<endl;
            cout<<"Number of candidate for the test is :- "<<Nocandidate<<endl;
            cout<<"Number of center required for the test is :- "<<CenterReqd<<endl;
             CenterReqd=calcnter();
           
        };
};
test::test()
{
    cout<<"enter the testcode:- ";
    cin>>testcode;
    cout<<"Enter the description of the test:- ";
    cin>>description;
    cout<<"Enter the number of candidates  for the test:- ";
    cin>>Nocandidate;
    cout<<"enter centerReqd:- ";
    cin>>CenterReqd;
}
int main()
{
    test t1;
    t1.schedule();
    return 0;
}