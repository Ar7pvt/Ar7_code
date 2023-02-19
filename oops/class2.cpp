#include<iostream>
using namespace std;

class binary
{
    string s;

    public:
      void setdata(void);
      void chek_bi(void);
      void once_comp(void);
      void display(void);
};

void binary::setdata(void)
{
    cout<<"Enter any binary no "<<endl;
    cin>>s;
}

void binary::chek_bi(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"The given no is not binary"<<endl;
            exit(0);
        }
        
    }
}

void binary:: once_comp(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary:: display(void)
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary b;
    b.setdata();
    b.chek_bi();
    b.once_comp();
    b.display();
    return 0;
}