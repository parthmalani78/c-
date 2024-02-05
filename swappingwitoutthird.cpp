 #include<iostream>

 using namespace std;

 int main()
 {
    int a,b;

    cout<<"enter the value:-";
    cin>>a;
    
    cout<<"enter the value:-";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"this value is:-"<<a<<endl;
    cout<<"this value is :-"<<b<<endl;

    return 0;

 }