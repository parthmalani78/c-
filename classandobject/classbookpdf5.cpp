#include<iostream>

using namespace std;

class book
{
    private:
        int bookno;
        char booktitle[20];
        float price;
        float tcost;
        float total_cost(int n)
        {
            tcost=n*price;
            return tcost;
        }
    public:
        void input()
        {
            cout<<"enter the bookno:- ";
            cin>>bookno;
            cout<<"enter the title of the book:- ";
            cin>>booktitle;
             cout<<"enter the price:- ";
            cin>>price;
            
        }
        void purchase()
        {
            int n;
            cout<<"enter the number of books:-";
            cin>>n;
            total_cost(n);
            cout<<"the cost of:-"<<tcost<<endl;
        }

};
int main()
{
    book b1;
    b1.input();
    b1.purchase();

}