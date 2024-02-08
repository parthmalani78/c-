#include<iostream>

using namespace std;

class test
{
    private:
        int testcode;
        char Description[20];
        int NoCandidate;
        int CenterReqd;
        float  CALCNTR()
        {
           CenterReqd=NoCandidate/100+1;
            return CenterReqd;
        }
    public:
        void schedule()
        {
            cout<<"enter the testcode:-";
            cin>>testcode;
            cout<<"Enter the description of the test :- ";
            cin>>Description;
            cout<<"Number of candidate for the test :-";
            cin>>NoCandidate;
            CenterReqd=NoCandidate/100+1;
        }

        void displaytest()
        {
            cout<<"\n\nshowdata:"<<endl;
            cout<<"Test Code:- "<<testcode<<endl;
            cout<<"Description:- "<<Description<<endl;
            cout<<"Number of candidates:- "<<NoCandidate<<endl;
            cout<<"Center Required:- "<<CenterReqd<<endl;
        }

};
int main()
{
    test  t1;
    t1.schedule();
    t1.displaytest();
    return 0;
}