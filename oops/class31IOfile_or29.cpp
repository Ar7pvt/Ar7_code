#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("class31prem.txt");
    out<<"archit is very good gay "<<endl;
    out<<"archit is also a good gay ";
    out.close();

    ifstream in;
    string st;

    in.open("class31prem.txt");
    //in>>st;
    //cout<<st;

    while(in.eof() ==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }

return 0;
}