#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //for writing in file
    string st="alok raj ";
    ofstream out("prem.txt");
    out<<st;

    //for reading
    string st1;
    ifstream in("archit.txt");
    //in>>st1;  //for single word it terminate with space or enter
    getline(in,st1);//for single line it terminate with enter
    cout<<st1<<endl;
return 0;
}