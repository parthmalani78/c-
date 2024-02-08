
#include<iostream>

 using namespace std;

class batsman
{
    private:
        int bcode;
        char bname[20];
        int innings, notout, runs;
        float batavg;
        float calcavg()
        {
            batavg =runs/(innings-notout);
            return batavg;
        }

    public:
        void readdata()
        {
            cout<<"enter the bcode:-";
            cin>>bcode;
            cout<<"Enter the name of the Batsman:-";
            cin>>bname;
            cout<<"enter  no.of innings played by:-";
            cin>>innings;
            cout<<"Enter No. of balls faced and got out (Not Out):-";
            cin>>notout;
            cout<<"enter the runs of batsman:-";
            cin>>runs;
            calcavg();

        }
        void showdata()
        {
            cout<<"\n\nshowdata:-"<<endl;
            cout<<"Batsman code="<<bcode<<endl;
            cout<<"Name of the Batsman="<<bname<<endl;
            cout<<"No. of Innings Played By ="<<innings<<endl;
            cout<<"Number of Notouts= "<<notout<<endl;
            cout<<"Runs Contrubted by the Batsman="<<runs<<endl;
            cout<<"Average Run per Ball Face = "<<batavg<<endl;
        }

};
int main()
{
    batsman obj1;
    obj1.readdata();
    obj1.showdata();
}
