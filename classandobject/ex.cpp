 #include<iostream>

 using namespace std;
 class employee
 {
    private:
        int c,d;

    public:
        int a,b;
         void showint(int c1,int d1);
        void name()
       
        {
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;

        }
 };
 void employee::showint(int c1,int d1)
 {
    c = c1;
    d = d1;
 }
int main()
{
    employee detail;
    detail.a = 10;
    detail.b = 20;
    detail.showint(30,40);
    detail.name();
    
    
    return 0;

}