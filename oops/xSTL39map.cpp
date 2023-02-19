//cppmap.com website for extera info
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string,int>ma1;
    ma1["alok"]=45;
    ma1["prem"]=49;
    ma1["shiv"]=47;

    ma1.insert({{"archit",50},{"akshay",67}});

    map<string,int>::iterator iter;
    for(iter=ma1.begin();iter!=ma1.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"The size is "<<ma1.size()<<endl;
    cout<<"The max size is "<<ma1.max_size()<<endl;

return 0;
}