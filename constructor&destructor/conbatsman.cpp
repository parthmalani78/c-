#include<iostream>

using namespace std;

class batsman
{
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calavg()
    {
        batavg=runs/(innings-notout);
        return  batavg;
    }
    public:
        batsman();
    void readdata()
    {
        cout<<"batsman code:- "<<bcode<<endl;
        cout<<"batsman name:- "<<bname<<endl;
        cout<<"batsman innings:- "<<innings<<endl;
        cout<<"batsman notout:- "<<notout<<endl;
        cout<<"batsman runs:- "<<runs<<endl;
        batavg=calavg();
        cout<<"batsman  average:- "<<batavg<<endl;
    }
};
batsman::batsman()
{
    cout<<"enter the bcode:- ";
    cin>>bcode;
    cout<<"enter the batsman name:- ";
    cin>>bname;
    cout<<"enter the innings:- ";
    cin>>innings;
    cout<<"enter the notout:- ";
    cin>>notout;
    cout<<"enter the runs:- ";
    cin>>runs;
}
int main()
{
    batsman b1;
    b1.readdata();
    return 0;
}