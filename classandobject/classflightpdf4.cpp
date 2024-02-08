#include<iostream>

using namespace  std;

class flight
{
    private:
        int flightnumber;
        char destination[20];
        float distance,fuel;
        float caful()
        {
            if(distance<=1000)
            {
                fuel=500*distance/1000;
            }
            else if(distance<=2000)
            {
                 fuel=1100*distance/1000;
            }
            else
            {
                 fuel=2200*distance/1000;
            }
        }
        public:

            void feedinfo()
            {
                cout<<"enter the flightnumber:-";
                cin>>flightnumber;
                cout<<"enter the destination name :-";
                cin>>destination;
                cout<<"enter the distance of the flight :-";
                cin>>distance;
                caful();
            }

            void showinfo()
            {
                cout<<"\n\nShowthedata"<<endl;
                cout<<"Flight Number : "<<flightnumber<<endl;
                cout<<"Destination Name : "<<destination<<endl;
                cout<<"Distance : "<<distance<<" Km."<<endl;
                cout<<"Consumed Fuel : "<<fuel<<" Litres."<<endl;
            }
        
};
int main()
{
    flight  f1;
    f1.feedinfo();
    f1.showinfo();
    return 0;
}