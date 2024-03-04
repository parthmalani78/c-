#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
    string st="skill 3 to 5";
    string st2;

    // ofstream out("semple.txt");
    // out<<st;

    ifstream in("semple.txt");
     getline(in,st2);
     cout<<st2;

    return 0;
}