#include<iostream>
using namespace std;
int main()
{
    int rate,qty;
    cout << "Enter the rate:-";
    cin>>rate;
    cout<<"enter the qty:-";
    cin>>qty;

    int amt=rate*qty;
    int dis=amt*5/100;
    int billamt=amt-dis;
    int gst=billamt*18/100;
    int netbill=gst+billamt;

    cout<<"rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill"<<endl;

    cout<<"\t"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netbill;
    return 0;
}